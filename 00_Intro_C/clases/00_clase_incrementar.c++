#include <iostream>

using namespace std; 

//Incrementar saldo cuenta

class Cuenta { 

	private : 

   	
   	public : 
   		string titular, numCuenta;
		float saldo;



	void ingresar(float ingreso){

	     saldo+=ingreso;
    
	     cout <<  " El saldo es : " << saldo << endl;
    
	}


	bool retirar(float retirar){

	    if(retirar > saldo ) return false;
	    saldo -= retirar;
	    
	    return true;   
	}



};

void mostrarCuenta ( Cuenta c ) {

	cout << endl << "El titular de mi cuenta es " << c.titular 
	<< endl << " con el numero de cuenta :  " <<  c.numCuenta  << endl
	<<  " Tiene de Saldo : " << c.saldo << " euros " << endl ;

}

//recibir el puntero de una cuenta Cuenta *c
void ingresarDinero(Cuenta *c){
	
	float ingreso=0;
	
	cout << "Introduce el ingreso " << endl;
	cin >> ingreso;

	// * = -> para asignarle el operador a saldo
	// c -> saldo += ingreso;
	//la dirección del saldo de una cuenta (*c).saldo	
	(*c).saldo += ingreso;
	
	//cout << endl << "El saldo final de la cuenta es : " << c -> saldo << " euros " << endl;

	cout << endl << "El saldo final de la cuenta es : " << (*c).saldo << " euros " << endl;

	
	//mostrarCuenta(c);
}

int main( int argc, char *argv[] ){

	Cuenta c ;
	c.titular = "Pedro" ; 
	c.numCuenta = "01";
	c.saldo =  21.34 ;

	ingresarDinero(&c); //coge c y averigua en que posición de memoria este

	/*c.ingresar(1000);
	if(c.retirar(100))  
		cout << " Has retirado 100 euros " << endl;
	if(c.retirar(2000)) 
		cout << " Has retirado 2000 euros " << endl; 
	else 
		cout << " No tenias tanto dinero ¡ MUERTO DE HAMBRE  ! " << endl; 
	*/
	mostrarCuenta(c);

	 
}




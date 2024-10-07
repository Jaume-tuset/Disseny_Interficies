#include <iostream>

using namespace std; 

//Instancia de la classe cuenta 

//los atributos de las clases son privados por defecto

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

//mostrar Cuenta de los usuarios
void mostrarCuenta ( Cuenta c ) {

	cout << endl << "El titular de mi cuenta es " << c.titular 
	<< endl << " con el numero de cuenta :  " <<  c.numCuenta  << endl
	<<  " Tiene de Saldo : " << c.saldo << " euros " << endl ;

}


/*void ingresarDinero(Cuenta c){
	
	float ingreso=0;
	
	cout << "Introduce el ingreso " << endl;
	cin >> ingreso;

	c.saldo+=ingreso;	
	
	cout << endl << "El saldo final de la cuenta es : " << c.saldo << " euros " << endl;
	
	//mostrarCuenta(c);
}*/

int main( int argc, char *argv[] ){

	Cuenta c ;
	c.titular = " Pedro " ; 
	c.numCuenta = " 01 ";
	c.saldo =  21.34 ;
	
	/*cout << endl << "El titular de mi cuenta es " << c.titular 
	<< endl << " con el numero de cuenta :  " <<  c.numCuenta  << endl
	<<  " Tiene de Saldo : " << c.saldo << " euros " << endl;*/
	//ingresarDinero(c);

	c.ingresar(1000);
	if(c.retirar(100))  
		cout << " Has retirado 100 euros " << endl;
	if(c.retirar(2000)) 
		cout << " Has retirado 2000 euros " << endl; 
	else 
		cout << " No tenias tanto dinero ¡ MUERTO DE HAMBRE  ! " << endl; 
	
	mostrarCuenta(c);

	/* cuenta 2  
	Cuenta c2;
	c2=c;
	c2.saldo=200;
	c2.titular="Luis";
	c2.numCuenta="02";
	ingresarDinero(c2);
	
	cout << endl << "El titular de mi cuenta es " << c.titular 
	<< endl << " con el numero de cuenta :  " <<  c.numCuenta  << endl
	<<  " Tiene de Saldo : " << c.saldo << " euros " << endl ;*/

	
	
	 
}




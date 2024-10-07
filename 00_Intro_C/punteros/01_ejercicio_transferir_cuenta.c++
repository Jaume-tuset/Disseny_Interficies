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


void transferir(Cuenta *c1, Cuenta *c2){


	//(*c1).saldo+=(*c2).saldo; #recommended
	// -> : acceder a un atributo del objeto apuntado
	c2 -> saldo += c1 -> saldo; 
	c1 -> saldo = 0;
	//(*c1).saldo-=(*c1).saldo;
	
	
	cout << "Saldo de la cuenta c1 " << (*c1).saldo << endl;
	cout << "Saldo de la cuenta c2 " << (*c2).saldo << endl;
	
}


int main( int argc, char *argv[] ){

	Cuenta c ;
	c.titular = "Pedro" ; 
	c.numCuenta = "01";
	c.saldo =  21.34 ;

	Cuenta c1, c2;

	c1.saldo=100;
	c2.saldo=100;

	// Cuenta *una, *otra	
	
	transferir(&c1,&c2);
	
	// c1 saldo debe ser 0 
	// c2 saldo debe ser 200

	

	 
}




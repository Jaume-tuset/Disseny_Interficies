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

	c2 -> saldo += c1 -> saldo; 
	c1 -> saldo = 0;
	
	cout << "Saldo de la cuenta c1 " << (*c1).saldo << endl;
	cout << "Saldo de la cuenta c2 " << (*c2).saldo << endl;
	
}
//Cuenta temporal 
Cuenta * unir( Cuenta * c1, Cuenta * c2, Cuenta * c3 ){

	float saldoTotal = (*c1).saldo + (*c2).saldo + (*c3).saldo;
	
	//asignar saldos a 0
	(*c1).saldo = (*c2).saldo = (*c3).saldo = 0;
		
	//Nueva cuenta que ya no es temporal y no es destruida al finalizar la función
	Cuenta * p = new Cuenta;
	
	(*p).saldo = saldoTotal;
	
	//Devuelve el objeto p que ya es un puntero
	return p;

}


int main( int argc, char *argv[] ){

	Cuenta c1, c2, c3;

	c1.saldo=100;
	c2.saldo=200;
	c3.saldo=300;
	
	Cuenta *total;
	total = unir( &c1, &c2, &c3);
	
	//total -> saldo = 600
	
	// total debe ser una cuenta distinta a c1 , c2 y c3 que se van a quedar a 0
	
	mostrarCuenta(c1);	
	mostrarCuenta(c2);	
	mostrarCuenta(c3);	
	mostrarCuenta(*total);	

}




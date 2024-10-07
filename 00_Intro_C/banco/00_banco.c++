#include <iostream>
#include <sstream>

using namespace std; 

// ARRAYS 

// OFICINA BANCARIA AMB DISTINTS COMPTES

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

	cout << endl << "El titular : " << c.titular << "\t "
	<< " numero de cuenta :  " <<  c.numCuenta  
	<< "\t Tiene de Saldo : " << c.saldo << " e " << endl ;

}


void inicializarCuentas ( Cuenta * datos ) {

	//Arrays de strings inicialitzat 
	
	string nombres[5]= { " juan " , " perico " , " andres " , " fulano " , " vengano " };
	
	int i = 0 ;
	
	while ( i < 5 ) {
		
		stringstream ss; 
		ss << 100 + i ; 
		string numCuenta = ss.str();
		datos [i].titular = nombres[i];
		datos[i].numCuenta = numCuenta;
		datos[i].saldo = 100*i;
		i++;
	}

}


void mostrarCuentas( Cuenta cuentas[10] ){

	for ( int i = 0 ; i < 10 ; i++)
		cout << cuentas[i].numCuenta << "\t";
	cout << endl;


	for ( int i = 0 ; i < 10 ; i++)
		cout << cuentas[i].titular << "\t";
	cout << endl;
	
	for ( int i = 0 ; i < 10 ; i++)
		cout << cuentas[i].saldo << "\t";
	cout << endl;

}


bool ingresar(Cuenta &c){

	float cantidad;
	
	cout << endl;
	
	cout << " Introduce la cantidad a ingresar : " ; 

	cin >> cantidad; 
	
	if ( cantidad < c.saldo ) {
	
		c.saldo += cantidad; 
		return true;
		
	}
	
	return false;

}

bool retirar(Cuenta &c){

	float cantidad;

	cout << endl;
	
	cout << " Introduce la cantidad a retirar : " ; 

	cin >> cantidad; 
	
	if ( cantidad < c.saldo ) {
	
		c.saldo -= cantidad; 
		return true;
		
	}
	
	return false;

}

int main( int argc, char *argv[] ){

	
	Cuenta cuentas[10];
	
	/* Cuenta * cuentas ; */ // es lo mateix que Cuenta cuentas[10]; 
	

	//Función inizialice els comptes 
	
	inicializarCuentas ( cuentas ) ;
	
	//ingresar un valor de tipo cuenta pero quiero pasar un puntero asi que & y ()
	//ingresar ( &(cuentas[1]) ) ;

	
	ingresar ( cuentas[1] ) ;
	
	//No siempre se podrá retirar 
	
	if( ! retirar ( cuentas[2] ) ) {
		cout << " No tienes dinero en la cuenta  " << endl;	
	} 
	
	mostrarCuentas(cuentas);
	

}




#include <iostream>
#include <sstream>
#include <vector>

using namespace std; 

// VECTORES

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
	<< "numero de cuenta :  " <<  c.numCuenta  
	<< "\t Tiene de Saldo : " << c.saldo << " e " << endl ;

}


void inicializarCuentas ( vector<Cuenta> * datos ) {
	
	string nombres[10]= { " juan " , " perico " , " andres " , " fulano " , "luis ","anton "};
	
	int i = 0 ;
	
	while ( i < 10 ) {
		Cuenta nueva;
		stringstream ss; 
		ss << 100 + i ; 
		string numCuenta = ss.str();
		nueva.titular = nombres[i];
		nueva.numCuenta = numCuenta;
		nueva.saldo = 100*i;
		
		//push_back : crear copia de algo temporal para que sea permanente
		datos -> push_back(nueva);
		
		i++;
	}

}


void mostrarCuentas(vector<Cuenta> cuentas){

	for ( int i = 0 ; i < cuentas.size() ; i++)
		cout << cuentas[i].numCuenta << "\t";
	cerr << endl;


	for ( int i = 0 ; i < cuentas.size() ; i++)
		cout << cuentas[i].titular << "\t";
	cerr << endl;
	
	for ( int i = 0 ; i < cuentas.size() ; i++)
		cout << cuentas[i].saldo << "\t";
	cerr << endl;

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

	
	//Cuenta cuentas[10];
	vector<Cuenta> cuentas;
		
	inicializarCuentas ( & cuentas ) ;
	
	ingresar ( cuentas[1] );
	

	if( ! retirar ( cuentas[2] ) ) {
		cout << " No tienes dinero en la cuenta  " << endl;	
	} 
	
	mostrarCuentas(cuentas);
	

}




#include <iostream>
#include <sstream>

using namespace std; 

// ARRAYS 02

// OFICINA BANCARIA AMB DISTINTS COMPTES

class Cuenta { 

	private : 

   	
   	public : 
   		string titular, numCuenta;
		float saldo;



	void ingresar(float ingreso){

	     saldo+=ingreso;
    
	     cerr <<  " El saldo es : " << saldo << endl;
    
	}


	bool retirar(float retirar){

	    if(retirar > saldo ) return false;
	    saldo -= retirar;
	    
	    return true;   
	}



};

void mostrarCuenta ( Cuenta c ) {

	cerr << endl << "El titular : " << c.titular << "\t "
	<< " numero de cuenta :  " <<  c.numCuenta  
	<< "\t Tiene de Saldo : " << c.saldo << " e " << endl ;

}

//** datos tambien vale 
void inicializarCuentas ( Cuenta * datos[ 10 ] ) {

	for ( int i = 0 ; i < 10 ; i++ ) {
		datos[i] = NULL; 
	}


	string nombres[5]= { " juan " , " perico " , " andres " , " fulano " , " vengano " };
	
	int i = 0 ;
	
	while ( i < 5 ) {

		Cuenta * p = new Cuenta();
		datos[i] = p;
		
		stringstream ss; 
		ss << 100 + i ; 
		string numCuenta = ss.str();
		datos [i]->titular = nombres[i];
		datos[i]->numCuenta = numCuenta;
		datos[i]->saldo = 100*i;
		i++;
	}

}


void mostrarCuentas( Cuenta * cuentas[10] ){

	for ( int i = 0 ; i < 10 ; i++)
		if(cuentas[i] != NULL ) 
		cerr << (*(cuentas[i])).numCuenta << "\t";
	cerr << endl;


	for ( int i = 0 ; i < 10 ; i++)
		if(cuentas[i] != NULL ) 
		cerr << cuentas[i]->titular << "\t";
	cerr << endl;
	
	for ( int i = 0 ; i < 10; i++)
		if(cuentas[i] != NULL ) 
		cerr << cuentas[i]->saldo << "\t";
	cerr << endl;

}


bool ingresar(Cuenta &c){

	float cantidad;
	
	cerr << endl;
	
	cerr << " Introduce la cantidad a ingresar : " ; 

	cin >> cantidad; 
	
	if ( cantidad < c.saldo ) {
	
		c.saldo += cantidad; 
		return true;
		
	}
	
	return false;

}

bool retirar(Cuenta &c){

	float cantidad;

	cerr << endl;
	
	cerr << " Introduce la cantidad a retirar : " ; 

	cin >> cantidad; 
	
	if ( cantidad < c.saldo ) {
	
		c.saldo -= cantidad; 
		return true;
		
	}
	
	return false;

}


void crearAPartir( Cuenta * cuentas , Cuenta * cuenta[x] , Cuenta * cuenta[y]){

	
	Cuenta * pos = cuenta[5];
	


}


int main( int argc, char *argv[] ){

	
	Cuenta * cuentas[10];
		
	inicializarCuentas ( cuentas ) ;
	
	//ingresar un valor de tipo cuenta pero quiero pasar un puntero asi que & y ()
	//ingresar ( &(cuentas[1]) ) ;

	ingresar ( *( cuentas[1] ) ) ;
	
	//No siempre se podrá retirar 
	
	if( ! retirar ( *( cuentas[2] ) ) ) {
		cerr << " No tienes dinero en la cuenta  " << endl;	
	} 
	
	mostrarCuentas(cuentas);
	
	
	//crear una nueva cuenta en la posición[5] con la mitad del dinero
	//de la cuenta en la posicion[3] ( que también se queda a la mitad) 
	//verifica la existencia de todo 
	crearAPartir(cuentas, 5, 3);

	cer << "Mostrar cuenta a partir de las cuentas 5 - 3 " << endl;
	mostrarCuentas(cuentas);

	
	crearAPartir(cuentas, 9,8); //falla , 8 no existe 
	crearAPartir(cuentas, 3,2); //falla , 3 ya existe

	cer << "Mostrar cuenta a partir de las cuentas 9 - 8 y 3 - 2" << endl;
	mostrarCuentas(cuentas);
	
	

}




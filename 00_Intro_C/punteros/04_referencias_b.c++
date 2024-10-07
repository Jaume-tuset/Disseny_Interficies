#include <iostream>

//REFERENCIAS 

//Sirve para referenciar argumentos

using namespace std; 

//Ejercicio : maxixmo de 2 numeros de referencias y que se incremente j como max 

int & maximoRef ( int &i , int &j){

	if ( i > j ) return i;

	return j;

}

int main( int argc, char *argv[] ){


	int i=8;
	int j=9;
	
	int &max = maximoRef( i , j );	

	max++;
	
	cout << "El valor de i es : " << i << endl << "El valor de j es : " << j << endl;
	

}




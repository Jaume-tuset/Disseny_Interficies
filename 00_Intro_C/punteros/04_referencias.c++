#include <iostream>

//REFERENCIAS 

//Sirve para referenciar argumentos

using namespace std; 

//Ejercicio : 

void incrementar( int &num){

	num++;

}

int main( int argc, char *argv[] ){


	int i; 
	i = 8;
	
	// ** : puntero a puntero -> variable que va a una variable que es un puntero
	// & : referencia a otro nombre para una variable que ya existe
	/*
	   - Nos olvidamos de los formatos temporales y de las copias 
	   - assistant & -> install sudo apt install qtchooser 
	*/
	
	int &j = i;

	incrementar(i);
	
	cout << "El valor de i es : " << i << endl;
	

}




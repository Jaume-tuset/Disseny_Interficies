#include <stdio.h>
#include <iostream> 
#include <stdlib.h>
#define TAMANYO 20

// RANDOM : #include <stdlib.h>
// RANDOM DE 30 NUMEROS EN UN ARRAY Y CANVIAR LA POSICION DE ELEMENTOS

using namespace std;

int numeros[TAMANYO];

int main(int argc, char *argv[]) {

  int num = 0;

  //Sin ordenar
	
  for ( int i = 0; i < TAMANYO; i++ )  numeros[i] = random() % 100;
  	
  cout << "Lista de Numeros sin Ordenar : " ;
  	
  for ( int i = 1; i <= TAMANYO; i++ ) cout << numeros [ i ] << " ";

  cout << endl;
  
  
  //Ordenar numeros 
  
  //Intercambios
  /*
    int aux =  numeros[1];
    numeros[1] = numeros[2];
    numeros[2] = aux;
  */
    
  int aux = 0;
   
  for ( int i = 0; i < TAMANYO - 1; i++ ) {
   for ( int j = i+1; j < TAMANYO; j++ ) {
       if ( (i != j) &&  ( numeros[j] > numeros[i]) ) {
	  aux = numeros[i];
	  numeros[i] = numeros[j];
	  numeros[j] = aux;  
	}
    }
  }

  cout << "Lista de Numeros Ordenar : " ;
  for ( int i = 0; i < TAMANYO; i++ ) cout << numeros [ i ] << " ";

  cout << endl;
  
  
  
  
}

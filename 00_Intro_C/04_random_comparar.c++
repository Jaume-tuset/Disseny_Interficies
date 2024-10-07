#include <stdio.h>
#include <iostream> 
#include <stdlib.h>
#define TAMANYO 20

// RANDOM : #include <stdlib.h>
// RANDOM DE 30 NUMEROS EN UN ARRAY Y VER SI HAY ALGUNO REPETIDO

using namespace std;

int numeros[TAMANYO];

int main(int argc, char *argv[]) {

  int num = 0;

  for ( int i = 0; i < TAMANYO; i++ )  {
  
  	numeros[i] = random() % 100;
  		
  }
  	
  cout << "Numero repetido : " << endl ;
  
  for ( int i = 0; i < TAMANYO; i++ ) {
   for ( int j = 1; j < TAMANYO; j++ ) {
	
	if ( ( i != j) && ( numeros[i] == numeros[j] ) ) {
		num = numeros[i]; 
		cout << "El numero " << numeros[i] << " aparece en la posicion " << i << " y la posicion " << j << endl;
	}
   }
  }

  
  
  
  
}

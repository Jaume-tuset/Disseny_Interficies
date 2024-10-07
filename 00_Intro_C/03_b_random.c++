#include <stdio.h>
#include <iostream> 
#include <stdlib.h>
#define TAMANYO 20

// RANDOM : #include <stdlib.h>
// RANDOM DE 30 NUMEROS EN UN ARRAY

using namespace std;

int numeros[TAMANYO];

int main(int argc, char *argv[]) {

  int num = 0;

  for ( int i = 0; i < TAMANYO; i++ )  numeros[i] = random() % 100;
  	
  cout << "Numeros : " << endl;
  
  for ( int i = 1; i <= TAMANYO; i++ ) cout << i << " : " << numeros [ i ] << endl;
  	 
  cout << endl;
  
  
}

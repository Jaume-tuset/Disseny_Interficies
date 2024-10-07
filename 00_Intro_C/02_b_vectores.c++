#include <stdio.h>
#include <iostream> 

// VECTORES SOL : NACHO
// PROGRAMA QUE PIDA UN NUMERO REPETIDAMENTE HASTA QUE EL NUMERO SEA MAYOR A 10 , LA SUMA DE LOS NUMEROS TIENE QUE SER MAYOR A 20 . EL PROGRAMA DEBE MOSTRAR LOS NUMEROS INTRODUCIDOS EN ORDEN INVERSO

using namespace std;

int numeros[10];

int main(int argc, char *argv[]) {

  int numLeido = 0; 
  int arrayReverse [10];
  int suma = 0 ;
  bool seguir = true;
  int indice = 0;

  
  while((suma <= 20 ) && ( numLeido <= 10 )){
  
  	cout << " Introduce un numero :  ";
  	cin >> numLeido;
  	
  	if ( indice < 10) numeros[indice] = numLeido; 	indice++;
  	
  	suma+=numLeido;
  
 	seguir = ( numLeido <= 10 ) ;
 	
  
  }
  
  
  cout << "La suma final es " << suma << endl;
 
  cout << "Numeros : " ;
  
  for ( int i = indice-1; i>= 0; i-- ){
  
  	cout << numeros [ i ] << " ";
  	 
  }
  
  cout << endl;
  
  
}

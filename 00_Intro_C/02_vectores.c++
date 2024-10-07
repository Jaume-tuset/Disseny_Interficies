#include <stdio.h>
#include <iostream> 

// VECTORES 
// PROGRAMA QUE PIDA UN NUMERO REPETIDAMENTE HASTA QUE EL NUMERO SEA MAYOR A 10 , LA SUMA DE LOS NUMEROS TIENE QUE SER MAYOR A 20 . EL PROGRAMA DEBE MOSTRAR LOS NUMEROS INTRODUCIDOS EN ORDEN INVERSO

using namespace std;

int main(int argc, char *argv[]) {

  int numLeido = 0; 
  int numAcumulado [10];
  int arrayReverse [10];
  int suma = 0 ;
  int cont = 0 ;
  bool seguir = true;
  
  while((suma <= 20 ) && ( numLeido <= 10 )){
  
  	cout << " Introduce un numero :  ";
  	cin >> numLeido;

	cont++;

  	suma+=numLeido;
  
  	numAcumulado[numLeido];
  
 	seguir = ( numLeido <= 10 ) ;
 	
  
  }
    
  cout << "La suma final es " << suma << endl;
  
  for ( int i =0 ; i < cont; i++){
  
     cout << " Los numeros introducidos son : " << numAcumulado[i] << endl;
  
  }
  
  
  for ( int i =0 ; i < cont; i++){
  	  arrayReverse[i] = numAcumulado[i-1];

	  cout << " Los numeros introducidos a la inversa son : " << arrayReverse << endl;

  }


  
}

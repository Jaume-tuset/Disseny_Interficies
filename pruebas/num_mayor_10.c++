#include <stdio.h>
#include <iostream> 

// PROGRAMA QUE PIDA UN NUMERO REPETIDAMENTE HASTA QUE EL NUMERO SEA MAYOR A 10 O LOS NUMEROS INTRODUCIDOS SEAN MAYOR A 20

using namespace std;

int main(int argc, char *argv[]) {

  int numLeido = 0; 
  int suma = 0 ;
  bool seguir = true;
  
  while((suma <= 20 ) && ( numLeido <= 10 )){
  
  	cout << " Introduce un numero :  ";
  	cin >> numLeido;
  	
  	suma+=numLeido;
  
 	seguir = ( numLeido <= 10 ) ;
 	
  
  }
  
  
  cout << "La suma final es " << suma << endl;
  
}

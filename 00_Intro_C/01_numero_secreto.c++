#include <stdio.h>
#include <iostream> 

// PROGRAMA QUE PIDA UN NUMERO SECRETO Y MUESTRE LOS INTENTOS 

// BUCLES 
	

using namespace std;

int main(int argc, char *argv[]) {

  int numSecreto = 5; 
  int numPedido=0;  
  int cont=1;
  bool acertado = false ;
  
  printf(" Introduce el numero Secreto : \n");

  cin >> numPedido;
  
  // while ( true )  : mientras sea verdad  break : salir 
  
  while( numPedido != numSecreto ){
  
    printf(" Introduce el numero Secreto : \n");
    
    cin >> numPedido;
    
    if( numPedido != numSecreto ) {

      cout << " Numero Incorrecto " << endl; 
      cont++;
      
    } else {
    	break; 
    }
   
  }
  
  cout << " Numero Secreto Encontrado : " << 
  	numSecreto << endl <<
	" Numero Introducido : " << 
	numPedido 
	<< endl << 
	"Intentos : " << 
	cont << endl ;
   

/*  while ( !acertado ) {
     cin >> numPedido ; 
  
  	
  	    
     cont++; 
   }

*/
}

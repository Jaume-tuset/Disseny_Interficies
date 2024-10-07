#include <stdio.h>
#include <iostream> 

using namespace std;
// ¿? 

int main(int argc, char *argv[]) {
	
	//Declarar variables 
	/*
		%s : all 
		int : %d 
		string : %s
		float : %
		boolean : % 
		char : %c
		
	*/
	
	/* MANIAS DE NACHO 
	
 		- todas las variables empiezan por minuscula ( camelCase )
		  anyo_actual o anyoActual
		
		- Parentesis en valores con espacios 
		
		- linea -> argumentos linea y en coma dividir bloque 2 lineas 
		
	*/
	
	//int edad = 20;
	
	int anyoNacimiento = 1999;
	int anyoActual= 2024;

	//printf("Hola Alumno . Tienes.... %d años \n",edad);
	//printf("Hola Alumno. Tienes..... %s años \n", (anyoActual-anyoNacimiento) );

	/* printf("Hola Alumno. Tienes..... %d años \n", 
		(anyoActual - anyoNacimiento) ); */ 
	
	
	// cout : mostrar por pantalla 
	// cin : mostrar para interacción de usuario 
	// endl : salto de linea 
	
	printf("Hola Alumno. Tienes..... %d años \n", (anyoActual - anyoNacimiento) ); 
	  cout << "Te he dicho que tienes " << 
  	  ( anyoActual - anyoNacimiento) << 
 	  " años " << 
 	  endl ;	

	cin >> anyoNacimiento;	
	
	//ACTIVIDAD : PREGUNTAR AÑO DE NACIMIENTO 

	int anyoNaix=0;
	int edadPersona = 0; 
	
	printf( " \n " );
	printf(" Buenas Alumno . Que año Naciste ? " );
	
	cin >> anyoNaix;
	
	edadPersona = anyoActual - anyoNaix;
	
	if( edadPersona >= 18 ) {
	   cout << " Eres mayor de 18 años " << endl ;
	} else {
	   cout << " Eres menor de 18 años " << endl;	
	}	
	
	
	
}

#include <iostream>

using namespace std;

//almacenar el contingut de la memoria de una variable en una altra variable

//incrementar pero para recibir una redirección
// numero = p o dirección = p

void incrementar(int *p){

	*p+=1;	

}

int main(int argc , char *argv[]){

	int i = 8;
	
	int *p; //p apunta a un numero 
	p = &i; // posició de la memoria 
	
	cout << "i vale : " << i << endl;
	cout << "p vale como i : " << *p << endl;
	cout << "p posición memoria : " << p << endl;

	//cambiar variable i
	*p=100;


	int aux = *p ; // me voy al lugar donde esta apuntando p ( destino del puntero )  
	cout << "aux vale : " << aux << endl;
	
	//return 0;
	
	//PARA QUE SIRVEN LOS PUNTEROS 
	/*  */
	

	incrementar(&i); // pasar una dirección 
	
	cout << " i vale " << i << endl;
	
	
	

}

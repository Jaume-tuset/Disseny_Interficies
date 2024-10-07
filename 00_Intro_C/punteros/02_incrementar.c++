#include <iostream>

using namespace std; 

//Incrementar punteros

int *maximo ( int *i , int *j ) {
		
	//Operaciones de comparar punteros que devuelven un valor que ya esta en puntero
	if ( *i > *j ) return i;
	
	return j;  

}

void incrementar(int *p){

	*p = *p + 1;

} 

int main( int argc, char *argv[] ){

	int i = 8; 
	int j = 9;
	int *max; 

	//pasar direcciones por punteros
	max = maximo( &i, &j );

	(*max)++;	//max++;

	//i debe valer 8 
	//j debe valer 10 
	
	cout << " i vale " << i << " j vale " << j << endl 
	<< " el numero maximo es : " << *max << endl;
	
		

	 
}




#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Inicializar un arreglo de 5 elementos y verificar cual de los elementos es mayor
	
	int arreglo[5] = {10,30,-20,45,60};
	int mayor = 0;
	
	for (int i = 0; i < 5; i++){
		if(arreglo[i] > arreglo[mayor]){
			mayor = i;
		}
	}
	
	printf("\nEl elemento de mayor valor en el arreglo es:  %d", arreglo[mayor]);
	printf("\n\nY esta en la posicion:  %d", mayor);
	
	return 0;
}


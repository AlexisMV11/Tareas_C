#include <stdio.h>

void ingresarvalores(int arreglo[3]) {
	for (int i = 0; i < 3; i++) {
		printf("Ingrese el valor para la posición %d: ", i + 1);
		scanf("%d", &arreglo[i]);
	}
}

void sumararreglo(int arreglo[3]) {
	int suma = 0;
	for (int i = 0; i < 3; i++) {
		suma += arreglo[i];
	}
	printf("La suma de los elementos del arreglo es: %d\n", suma);
}

int main() {
	int arreglo[3];
	
	ingresarvalores(arreglo);
	
	sumararreglo(arreglo);

	
	return 0;
}


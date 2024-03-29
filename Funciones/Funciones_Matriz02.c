#include <stdio.h>

void imprimirMatriz(int filas, int columnas) {
	printf("Matriz:\n");
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			printf("+ ");
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
	int filas, columnas;
	
	printf("Ingrese el número de filas: ");
	scanf("%d", &filas);
	
	printf("Ingrese el número de columnas: ");
	scanf("%d", &columnas);
	
	// Llamada a la función secundaria desde la función principal
	imprimirMatriz(filas, columnas);
	
	return 0;
}

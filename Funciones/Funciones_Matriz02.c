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
	
	printf("Ingrese el n�mero de filas: ");
	scanf("%d", &filas);
	
	printf("Ingrese el n�mero de columnas: ");
	scanf("%d", &columnas);
	
	// Llamada a la funci�n secundaria desde la funci�n principal
	imprimirMatriz(filas, columnas);
	
	return 0;
}

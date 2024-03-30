#include <stdio.h>

// Se define el tama�o m�ximo de filas y columnas para la matriz
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

// Declaraci�n de las funciones
void crear_matriz(int filas, int columnas);
void imprimir_matriz(int filas, int columnas, int matriz[][MAX_COLUMNAS]);

// Funci�n principal
int main(int argc, char *argv[]) {
	int filas, columnas;
	
	// Solicitamos al usuario el n�mero de filas y columnas
	printf("Ingrese el n�mero de filas: ");
	scanf("%d", &filas);
	printf("Ingrese el n�mero de columnas: ");
	scanf("%d", &columnas);
	
	// Llamamos a la funci�n para crear la matriz
	crear_matriz(filas, columnas);
	
	return 0;
}

// Funci�n para crear la matriz
void crear_matriz(int filas, int columnas) {
	// Declaramos la matriz
	int matriz[MAX_FILAS][MAX_COLUMNAS];
	
	// Solicitamos al usuario que ingrese los elementos de la matriz
	printf("Ingrese los elementos de la matriz:\n");
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			printf("Elemento (%d, %d): ", i + 1, j + 1);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	// Llamamos a la funci�n para imprimir la matriz
	imprimir_matriz(filas, columnas, matriz);
}

// Funci�n para imprimir la matriz
void imprimir_matriz(int filas, int columnas, int matriz[][MAX_COLUMNAS]) {
	// Imprimimos la etiqueta para la matriz
	printf("Matriz:\n");
	
	// Iteramos sobre cada elemento de la matriz e imprimimos su valor
	for (int i = 0; i < filas; i++) {
		for (int j = 0; j < columnas; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

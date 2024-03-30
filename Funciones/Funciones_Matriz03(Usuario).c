#include <stdio.h>

// Se define el tamaño máximo de filas y columnas para la matriz
#define MAX_FILAS 100
#define MAX_COLUMNAS 100

// Declaración de las funciones
void crear_matriz(int filas, int columnas);
void imprimir_matriz(int filas, int columnas, int matriz[][MAX_COLUMNAS]);

// Función principal
int main(int argc, char *argv[]) {
	int filas, columnas;
	
	// Solicitamos al usuario el número de filas y columnas
	printf("Ingrese el número de filas: ");
	scanf("%d", &filas);
	printf("Ingrese el número de columnas: ");
	scanf("%d", &columnas);
	
	// Llamamos a la función para crear la matriz
	crear_matriz(filas, columnas);
	
	return 0;
}

// Función para crear la matriz
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
	
	// Llamamos a la función para imprimir la matriz
	imprimir_matriz(filas, columnas, matriz);
}

// Función para imprimir la matriz
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

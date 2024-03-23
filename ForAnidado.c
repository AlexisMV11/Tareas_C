#include <stdio.h>

int main(int argc, char *argv[]) {
	// Ciclo para ir rrecorriendo cada tabla
	for (int i = 1; i <= 10; i++){
		printf("Tablas de multiplicar del %d:\n", i);
		// Ciclo para imprimir las tablas de multiplicar
		for (int j = 1; j<= 10; j++){
			printf("%d X %d = %d\n", i, j, i * j);
		}
		printf("\n"); //Salto de linea para separar cada tabla de multiplicar
	}
	
	return 0;
}


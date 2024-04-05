#include <stdio.h>

int calcularTablaMultiplicar(int numero) {
	printf("Tabla de multiplicar de %d:\n", numero);
	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
	return 0; 
}

int main(int argc, char *argv[]) {
	int num;

	printf("Ingrese un número para ver su tabla de multiplicar (0 para salir): ");
	scanf("%d", &num);
	
	while (num != 0) {
		calcularTablaMultiplicar(num);
		
		printf("\nIngrese otro número para ver su tabla de multiplicar (0 para salir): ");
		scanf("%d", &num);
	}
	
	printf("Fin del programa.\n");
	
	return 0;
}

#include <stdio.h>

void tablaMultiplicar(int numero) {
	printf("Tabla de multiplicar del %d:\n", numero);
	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
}

int main(int argc, char *argv[]) {
	int numero;
	printf("Que tabla de multiplicar te gustaria conocer: ");
	scanf("%d", &numero);
	tablaMultiplicar(numero);
	
	return 0;
}


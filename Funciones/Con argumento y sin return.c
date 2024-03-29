#include <stdio.h>

void suma (int n1,  int n2){
	int resultado;
		resultado = n1 + n2;
	printf("El resultado es: %d", resultado);
}

int main(int argc, char *argv[]) {
	int n1, n2;
	printf("Proporcioname dos numeros enteros\n");
	scanf("%d%d", &n1, &n2);
 	suma (n1, n2);
	return 0;
}


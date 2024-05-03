#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int arreglo[4]={10, 15, 23, 40};
	int resultado, resultado2;
	
	resultado = arreglo[0] + arreglo[3];
	printf("resultado %d: ", resultado);
	
	resultado2 = arreglo[1] * arreglo[2];
	printf("\nresultado %d: ", resultado2);
	
	
	return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i = 1;
	
	printf("Numeros del 1 al 10:\n\n");
	while (i <= 10){
		printf("Numero: %d\n", i);
		i ++;
	}
	
	i = 1;
	printf ("\nNumeros pares del 1 al 10:\n\n");
	while (i <= 10){
	if (i % 2 == 0){
		printf("Numero: %d\n", i);
	}
	i++;
	}
	
	return 0;
}


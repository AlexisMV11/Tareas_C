#include <stdio.h>

int main(int argc, char *argv[]) {

	int contador, i;
	
	contador = 0;
	printf("Numeros de dos en dos hasta el 10\n");
	while (contador <= 10) {
		printf ("%d \n", contador);
		contador += 2;
	}
	
	printf ("\nNumeros de -1 en -1 hasta -10 \n");
	i = 0;
	while (i >= -10) {
		printf ("%d \n", i);
		i--;
	}
	return 0;
}


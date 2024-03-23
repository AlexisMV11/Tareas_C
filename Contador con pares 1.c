#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int i = 1;
	
	printf("Los numeros pares del 1 al 10 son: \n");
	
	while (i <= 10){
		printf ("%d ", i);
		i ++;
		if (i % 2 == 0){
			printf("%d ", i);
		}
	}
	
	return 0;
}


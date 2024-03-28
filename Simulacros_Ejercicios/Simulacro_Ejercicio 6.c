#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numero, i = 0, pares = 1, impares = 0;
	
	printf("Ingrese 5 números:\n");
	
	while (i < 5) {
		printf("Número %d: ", i + 1);
		scanf("%d", &numero);
		
		if (numero % 2 == 0) {
			pares *= numero;
		} else {
			impares += numero;
		}
		
		i++;
	}
	
	printf("El resultado de la multiplicacion de pares es: %d\n", pares);
	printf("La suma de los números impares es: %d\n", impares);
	
	
	return 0;
}


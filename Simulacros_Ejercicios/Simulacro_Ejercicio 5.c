#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numero, negativos = 0, positivos = 0, sumapos, restafin;
	
	printf("Ingresa 10 numeros:\n");
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numero);
		
		if (numero < 0) {
			negativos += numero;
		} else {
			if (numero % 2 == 0) {
				positivos += numero;
			}
		}
	}
	
	sumapos = positivos - negativos;
	
	restafin = positivos - negativos;
	
	printf("La suma de los numeros positivos es: %d\n", positivos);
	printf("La suma de los numeros negativos es: %d\n", negativos);
	printf("La resta final es: %d\n", restafin);
	
	return 0;
}


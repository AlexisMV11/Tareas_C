#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int numero[10];
	int negativos = 0, positivos = 0, sumapos, restafin;
	
	printf("Ingresa 10 numeros:\n");
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numero[i]);
		
		if (numero[i] < 0) {
			negativos += numero[i];
		} else {
			if (numero[i] % 2 == 0) {
				positivos += numero[i];
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


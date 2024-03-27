#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//1 ciclo for - inicio:10 fin:15
	//imprimir cuantos pares e impares
	//sumar todos los numeros dentro del rango
	
	int inicio = 10, fin = 15, pares = 0, impares = 0, suma = 0;
	
	for (int i = inicio; i <= fin; i++){
		suma += i;
		if (i % 2 == 0){
			pares++;
		} else {
			impares++;
		}
	}
	
	printf("Cantidad de numeros pares: %d\n", pares);
	printf("Cantidad de numeros impares: %d\n", impares);
	printf("Suma de todos los numeros: %d\n", suma);
	
	return 0;
}


#include <stdio.h>

/*Programa que invierte un arreglo de enteros ingresado por el usuario*/

int main(int argc, char *argv[]) {
	
	//Definimos el arreglo con tamaño de 5
	int numero[5];
	
	//Solicitamos al usuario que ingrese los 5 numeros
	printf("Ingresa 5 numeros enteros:\n");
	for (int i = 0; i < 5; i++){
		printf("Numero %d: ", i + 1);
		scanf("%d", &numero[i]);
	}
	
	//Se muestra el arreglo original
	printf("\nArreglo original:\n");
	for (int i = 0; i < 5; i++){
		printf("%d ", numero[i]);
	}
	
	//Se invierte el arreglo
	int temp;
	for (int i = 0, j = 4; i < j; i++, j--){
		temp = numero[i];
		numero[i] = numero[j];
		numero[j] = temp;
	}
	
	//Mostramos el arreglo invertido
	printf("\n\nArreglo Invertido\n");
	for (int i = 0; i < 5; i++){
		printf("%d ", numero[i]);
	}
	
	return 0;
}


#include <stdio.h>

/*Programa que encuentra el numero maximo de 5 numeros ingresados por el usuario*/

int main(int argc, char *argv[]) {
	
	//Definimos el arreglo con un tamaño de 5 numeros
	int numeros[5];
	int maximo;
	
	//Pedimos los 5 numeros al usuario
	printf("Ingrese 5 numeros enteros al azar:\n");
	for (int i = 0; i < 5; i++){
		printf("Numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	//Suponemos que el primer numero es el maximo(Inizialisamos la variable con el primer numero ingresado)
	maximo = numeros[0];
	
	//Buscamos el numero maximo entre los numeros ingresados
	for (int i = 1; i < 5; i++){
		//Se compara cada numero con el valor actual de maximo y se actualiza la variable si se encuntra un numero mas grande
		if (numeros[i] > maximo){
			maximo = numeros[i];
		}
	}
	
	//Se imprime en consola
	printf("\nEl numero maximo es: %d", maximo);
	
	return 0;
}


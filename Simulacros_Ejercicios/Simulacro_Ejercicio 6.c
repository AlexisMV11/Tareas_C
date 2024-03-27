#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//1. ciclo while - 5 numeros
	//2. multi pares y sumar impares
	//3. mostras dos resultados
	
	int i = 0, num, negativos = 0, positivos = 1;
	
	printf("Ingresa 5 numeros\n");
	
	while (i < 5){
		scanf("%d", &num);
		
		if (num < 0){
			negativos += num;
		}	else {
			if (num % 2 == 0) {
				positivos *= num;
				//positivos = positivos * num;
		    } 
		}	
		i ++;
	}
		
	printf("El resultado de la multiplicacion de los numeros pares es: %d\n", positivos);
	printf("El resultado de la suma de los numeros impares es : %d\n", negativos);
	
	
		
	return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//1 ciclo Do While - numeros negativos
	//2 sumar numeros negativos
	//3 positivo acaba el ciclo
	
	int num, suma = 0;
	
	printf("Ingresa un numero negativo / Ingresa un numero positivo para cerrar el program\n");
	
	do {
		scanf ("%d", &num);
		
		if (num < 0){
			suma += num;
			//suma = suma + num
		}
	} while(num < 0);
	
	printf("La suma de los numeros negativos es: %d\n", suma);
	
	return 0;
}


#include <stdio.h>

int sumar(int a, int b);
int multiplicarPorDos(int resultadoSuma);

int ejecutarOperaciones(int num1, int num2) {
	// Llamada a la primera función para sumar los dos números
	int resultadoSuma = sumar(num1, num2);
	
	// Llamada a la segunda función que multiplica por 2 el resultado de la suma
	int resultadoFinal = multiplicarPorDos(resultadoSuma);
	
	//printf("El resultado de la suma es: %d\n", resultadoSuma);
	
	// Devolver el resultado final
	return resultadoFinal;
}

int main(int argc, char *argv[]) {
	int num1 = 5;
	int num2 = 7;
	
	// Llamada a la función que ejecuta las operaciones
	int resultadoFinal = ejecutarOperaciones(num1, num2);
	
	printf("El resultado de la multiplicacion es: %d\n", resultadoFinal);
	
	return 0;
}

int sumar(int a, int b) {
	return a + b;
}

int multiplicarPorDos(int resultadoSuma) {
	return resultadoSuma * 2;
}

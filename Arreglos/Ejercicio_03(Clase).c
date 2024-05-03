#include <stdio.h>

int sumar(int a, int b) {
	return a + b;
}

int multiplicarPorDos(int resultadoSuma) {
	return resultadoSuma * 2;
}

int main(int argc, char *argv[]) {
	
	int num1 = 5;
	int num2 = 7;
	
	int resultadoSuma = sumar(num1, num2);
	
	int resultadoFinal = multiplicarPorDos(resultadoSuma);
	
	printf("El resultado de la suma es: %d\n", resultadoSuma);
	printf("El resultado de la multiplicacion es: %d\n", resultadoFinal);
	
	return 0;
}


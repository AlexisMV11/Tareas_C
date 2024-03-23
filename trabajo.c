#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float salarioPorHora = 227.0 / 8; // Calculamos el salario por hora
	float salarioPor7Horas = salarioPorHora * 7; // Calculamos el salario por 7 horas
	float salarioSemanal = salarioPor7Horas * 7; // Calculamos el salario semanal (7 días)
	
	// Imprimimos los resultados
	printf("Salario por 1 hora: %.2f pesos\n", salarioPorHora);
	printf("Salario por 7 horas: %.2f pesos\n", salarioPor7Horas);
	printf("Salario semanal: %.2f pesos\n", salarioSemanal);
	
	return 0;
}


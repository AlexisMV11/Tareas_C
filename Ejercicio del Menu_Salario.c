#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float salariporHora, salarioHora8, salarioPor7Horas, salarioSemanal;
	salarioHora8 = 227.0;
	salarioPor7Horas = (salarioHora8 * 7) / 8; //Hacemos una regla de 3
	salariporHora = salarioPor7Horas / 7; //Dividir el salario por las horas trabajadas
	salarioSemanal = salarioPor7Horas * 7; //Multiplicar el salario por 7 dias
	
	
	printf("Salario por 7 hora: %.2f pesos\n", salarioPor7Horas);
	printf("Salario por 1 horas: %.2f pesos\n", salariporHora);
	printf("Salario semanal: %.2f pesos\n", salarioSemanal);
	
	
	
	return 0;
}

	//227 pesos -> 8 horas
	//x pesos   -> 7 horas


#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int opc, sumaPares, inicio, fin;
	float salariporHora, salarioHora8, salarioPor7Horas, salarioSemanal;
	salarioHora8 = 227.0;
	salarioPor7Horas = (salarioHora8 * 7) / 8; //Hacemos una regla de 3
	salariporHora = salarioPor7Horas / 7; //Dividir el salario por las horas trabajadas
	salarioSemanal = salarioPor7Horas * 7; //Multiplicar el salario por 7 dias
	
	do {
		printf("\n-------------- Menu -----------------\n");
		printf("1. Sumar pares entre dos numeros\n");
		printf("2. Calcular salario semanal\n");
		printf("3. Salir\n");
		printf("Selecciona una opcion: ");
		printf("\n---------------------------------------\n");
		scanf("%d", &opc);
		
		switch(opc) {
		case 1:
			inicio = 10;
			fin = 20;
			sumaPares = 0;
			for (int i = inicio; i <= fin; i += 2) {
				printf("Numero: %d\n", i);
				if (i % 2 == 0) {
					sumaPares += i;
				}
			}
			printf("La suma de los numeros pares entre %d y %d es: %d\n", inicio, fin, sumaPares);
			break;
			
		case 2:
			printf("Salario por 7 hora: %.2f pesos\n", salarioPor7Horas);
			printf("Salario por 1 horas: %.2f pesos\n", salariporHora);
			printf("Salario semanal: %.2f pesos\n", salarioSemanal);
			break;
			
		case 3:
			printf("Saliendo del programa...\n");
			break;
			
		default:
			printf("Opcion no valida. Por favor, selecciona una opcion valida.\n");
		}
	} while(opc != 3);
	
	return 0;
}


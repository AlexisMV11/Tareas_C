#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int matematicas = 10, biologia = 8, historia = 5;
	float promedio = (matematicas + biologia + historia) / 3.0;
	
	
	if (promedio >= 9 && promedio <= 10) {
		printf("�Felicidades! Eres excelente\n");
	} else if (promedio > 8 && promedio < 9) {
		printf("Eres un buen alumno\n");
	} else if (promedio >= 6 && promedio <= 8) {
		printf("Debes esforzarte m�s\n");
	} else {
		printf("No pasar�s el a�o, debes mejorar\n");
	}
	
	if (matematicas == biologia && biologia == historia) {
		printf("Todas tus calificaciones son iguales\n");
	} else if (matematicas >= biologia && matematicas >= historia) {
		printf("La calificaci�n m�s alta es de Matem�ticas: %d\n", matematicas);
	} else if (biologia >= matematicas && biologia >= historia) {
		printf("La calificaci�n m�s alta es de Biolog�a: %d\n", biologia);
	} else {
		printf("La calificaci�n m�s alta es de Historia: %d\n", historia);
	}
	
	return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int calif1 = 10, calif2 = 9, calif3 = 7, calif4 = 5;
	float promedio;
	char letra;
	
	promedio = (calif1 + calif2 + calif3 + calif4) / 4.0;
	printf("Promedio: %.2f\n", promedio);
	
	if (promedio < 0) {
		printf("El promedio no es una calificación válida.\n");
	}
	else if (promedio == 0) {
		printf("El promedio es nulo.\n");
	}
	else {
		if (promedio >= 10) {
			letra = 'a';
		}
		else if (promedio >= 8) {
			letra = 'b';
		}
		else if (promedio >= 7) {
			letra = 'c';
		}
		else {
			letra = 'f';
		}
		
		printf("Letra: %c\n", letra);
	}
	
	return 0;
}


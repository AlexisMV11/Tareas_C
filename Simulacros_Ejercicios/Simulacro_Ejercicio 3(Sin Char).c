#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int calif1 = 10, calif2 = 9, calif3 = 7, calif4 = 5;
	
	float promedio = (calif1 + calif2 + calif3 + calif4) / 4.0;
	printf("Promedio: %.2f\n", promedio);
	
	if (promedio < 0) {
		printf("El promedio no es una calificación válida.\n");
	}
	else if (promedio == 0) {
		printf("El promedio es nulo.\n");
	}
	else {
		
		if (promedio >= 10) {
			printf("Letra: a\n");
		}
		else if (promedio >= 8) {
			printf("Letra: b\n");
		}
		else if (promedio >= 7) {
			printf("Letra: c\n");
		}
		else {
			printf("Letra: f\n");
		}
	}
	
	return 0;
}


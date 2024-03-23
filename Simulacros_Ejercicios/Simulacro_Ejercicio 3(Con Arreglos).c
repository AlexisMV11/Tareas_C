#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int calificaciones[] = {10, 9, 7, 5};
	int totalcalif = sizeof(calificaciones) / sizeof(calificaciones[0]);
	
	float sumacalif = 0;
	for (int i = 0; i < totalcalif; ++i) {
		sumacalif += calificaciones[i];
	}
	float promedio = sumacalif / totalcalif;
	
	char letra;
	if (promedio < 0) {
		letra = 'X';  
	}
	else if (promedio == 0) {
		letra = 'N';  
	}
	else if (promedio >= 10) {
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
	
	printf("Promedio: %.2f\n", promedio);
	printf("Letra correspondiente al promedio: %c\n", letra);
	
	
	return 0;
}


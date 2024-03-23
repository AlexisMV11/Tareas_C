#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int s1, s2, s3, s4, suma;
	char nombre[15];
	printf ("Proporcioname tu primer nombre para empezar \n");
	fgets (nombre, 15, stdin);
	printf ("Muy bien proporcioname tus 4 salarios semanales \n");
	scanf ("%d %d %d %d", &s1, &s2, &s3, &s4);
	suma = s1 + s2 + s3 + s4;
	printf ("Tu salario fue = %d", suma);
	
	if (suma > s1 && suma > 5000) {
		printf ("\nFelicidades, has ido super bien en este mes ;)");
	}
	else if (s1 > s2 && s1 > s3 && s1 > s4) {
		printf ("\n　FELICIDADES!! tu primera semana fue la mejor, sigue asi ;)");
	}
	else if (s2 > s1 && s2 > s3 && s2 > s4) {
		printf ("\n　FELICIDADES!! tu segunda semana fue la mejor, sigue asi ;)");
	}
	else if (s3 > s1 && s3 > s2 && s3 > s4) {
		printf ("\n　FELICIDADES!! tu tercera semana fue la mejor, sigue asi ;)");
	}
	else if (s4 > s1 && s4 > s2 && s4 >s3) {
		printf ("\n　FELICIDADES!! tu cuarta semana fue la mejor, sigue asi ;)");
	}
	else {
		printf ("\n　TODAS TUS SEMANAS FUERON PERFECTAS!!, sigue asi ;)");
	}
	
	return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, multifinal, restafinal;
	char nom[20];
	
	printf ("Ingresa tu nombre > ");
	gets (nom);
	printf ("Vaya, que boito nombre ;D \n");
	
	printf ("Muy bien es momento de hacer una multiplicacion :D \n");
	printf ("Indicame por favor dos numeros para comenzar ;D \n");
	scanf ("%i", &n1);
	printf ("Perfecto, ahora el siguiente ;D \n");
	scanf ("%i", &n2);
	multifinal = n1 * n2;
	printf ("Vaya que ha sido facil >:3, el resultado es > %i", multifinal );
	
	printf ("\n");
	printf ("Por ultimo, realizaremos una resta con tu primer numero ingresado ;D \n");
	restafinal = multifinal - n1;
	printf ("El resultado final es > %i", restafinal);
	printf ("\n");
	printf ("Facilicimo verdad ;) %s", nom);
	
	
	return 0;
}


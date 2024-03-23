#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, multi, resta;
	
	printf ("Escribe un numero: ");
	scanf ("%d", &n1);
	printf ("Escribe otro numero: ");
	scanf ("%d", &n2);
	
	multi = n1 * n2;
	
	printf ("\n %d x %d = %d", n1, n2, multi);
	
	printf ("\n Ahora toca la resta \n");
	resta = multi - n1;
	printf ("%d - %d = %d", multi, n1, resta);
	
	return 0;
}


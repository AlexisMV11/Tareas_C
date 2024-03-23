#include <stdio.h>

int main(int argc, char *argv[]) {
//char se utiliza para dar un limite de letras cuando lleva [] 
	char nombre[10];
	printf ("Ingresa tu nombre > ");
	scanf ("%S",nombre);
	
	printf ("%s", nombre);
	
	return 0;
}


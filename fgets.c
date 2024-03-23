#include <stdio.h>
//#define CADENA 11
int main(int argc, char *argv[]) {
	
	char nombre[11];
	
	printf("Ingresa tu nombre ");
	fgets(nombre, stdin, sizeof(nombre));// CADENA);
	printf("El nombre es %s", nombre);
	
	return 0;
}


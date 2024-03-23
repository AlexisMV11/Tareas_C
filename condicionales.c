#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n1;
	//n1 = 10;
	printf ("Ingresa un numero entero\n");
	scanf ("%d", &n1);
	
	if (n1 > 0) {
		printf ("El numero es positivo");
	} else if (n1 < 0){
		printf("El numero es negativo");
	} else {
		printf ("El numero es 0");
	}
	
	return 0;
}


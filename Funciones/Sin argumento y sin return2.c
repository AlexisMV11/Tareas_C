#include <stdio.h>

void multi () {
	int a = 10, b = 3, resultado;
	resultado = a * b;
	printf("Resultado: %d\n", resultado);
}

void mayor () {
	printf("\n");
	int c = 3, d = 5, e = 7;
	if (c > d && c > e){
		printf("%d es mayor que %d y %d", c, d, e);
	}
	else if (d > c && d > e){
		printf("%d es mayor que %d y %d", d, c, e);
	}
	else {
		printf("%d es mayor que %d y %d", e, c, d);
	}
}

int main(int argc, char *argv[]) {
	multi();
	mayor();
	return 0;
}


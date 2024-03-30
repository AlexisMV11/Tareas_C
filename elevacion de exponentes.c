#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int num = 4;
	int expo = 2;
	int res;
	
	res = pow(num, expo);
	
	printf("El resuntado de %d elevado a la %d potencia es: %d", num, expo, res);
	
	
	return 0;
}


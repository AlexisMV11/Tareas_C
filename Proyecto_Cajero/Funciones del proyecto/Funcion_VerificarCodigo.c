#include <stdio.h>

int verificarCodigo() {
	int intentos = 0;
	int codigoCorrecto[4] = {2, 3, 6, 7};
	int codigoIngresado[4];
	
	while (intentos < 3) {
		printf("Ingrese su numero de tarjeta (2, 3, 6, 7):\n");
		scanf("%1d%1d%1d%1d", &codigoIngresado[0], &codigoIngresado[1], &codigoIngresado[2], &codigoIngresado[3]);
		
		int codigoCorrectoFlag = 1;
		for (int i = 0; i < 4; i++) {
			if (codigoIngresado[i] != codigoCorrecto[i]) {
				codigoCorrectoFlag = 0;
				break;
			}
		}
		
		if (codigoCorrectoFlag) {
			printf("Numero de tarjeta correcto.\n");
			return 1; 
		} else {
			if (intentos < 2) {
				printf("El numero de tarjeta es incorrecto. Intente nuevamente.\n");
			} else {
				printf("El numero de tarjeta es incorrecto.\n");
			}
			intentos++;
		}
	}
	
	printf("La cuenta sera bloqueada por proteccion.\n");
	return 0; 
}

int main(int argc, char *argv[]) {
	verificarCodigo();
	return 0;
}

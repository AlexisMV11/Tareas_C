#include <stdio.h>

int verificarNIP() {
	int intentos = 0;
	int nipCorrecto[4] = {1, 3, 2, 4};
	int nipIngresado[4];
	
	while (intentos < 3) {
		printf("Ingrese el NIP de 4 numeros (1, 3, 2, 4):\n");
		scanf("%1d%1d%1d%1d", &nipIngresado[0], &nipIngresado[1], &nipIngresado[2], &nipIngresado[3]);
		
		// Verificar si el NIP ingresado es correcto
		int nipCorrectoFlag = 1;
		for (int i = 0; i < 4; i++) {
			if (nipIngresado[i] != nipCorrecto[i]) {
				nipCorrectoFlag = 0;
				break;
			}
		}
		
		if (nipCorrectoFlag) {
			printf("NIP correcto.\n");
			return 1; 
		} else {
			if (intentos < 2) {
				printf("El NIP es incorrecto. Intente nuevamente.\n");
			} else {
				printf("El NIP es incorrecto.\n");
			}
			intentos++;
		}
	}
	
	printf("Puede que su cuenta este siendo robada. Se bloqueara temporalmente.\n");
	return 0; 
}


int main(int argc, char *argv[]) {
	verificarNIP();
	return 0;
}


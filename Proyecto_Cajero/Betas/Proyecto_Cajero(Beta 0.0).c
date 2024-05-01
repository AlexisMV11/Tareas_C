#include <stdio.h>

// Prototipos de las funciones
int verificarCodigo();
void verificarNIP(int nipCorrecto[]);
void consultarSaldo(int saldo);
int retirarDinero(int saldo);

int main(int argc, char *argv[]) {
	int opcion;
	int saldo = 7000; 
	
	printf("Bienvenido al cajero automatico\n");
	printf("Por favor, ingrese su codigo y NIP\n");
	
	if (verificarCodigo() == 1) { 
		verificarNIP((int[]){1, 3, 2, 4});
	} else {
		printf("El codigo es incorrecto.\n");
		return 0;
	}
	
	do {
		printf("\nOpciones:\n");
		printf("1. Consultar saldo\n");
		printf("2. Retirar dinero\n");
		printf("3. Salir\n");
		printf("Ingrese el numero de opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion) {
		case 1:
			consultarSaldo(saldo);
			break;
		case 2:
			saldo = retirarDinero(saldo);
			break;
		case 3:
			printf("Gracias por utilizar nuestro servicio.\n");
			break;
		default:
			printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");
			break;
		}
	} while (opcion != 3);
	
	return 0;
}

// Funcion para verificar el numero de tarjeta 
int verificarCodigo() {
	int intentos = 0;
	int codigoCorrecto[4] = {2, 3, 6, 7};
	int codigoIngresado[4];
	
	while (intentos < 3) {
		printf("Ingrese el codigo de 4 numeros (2, 3, 6, 7):\n");
		scanf("%1d%1d%1d%1d", &codigoIngresado[0], &codigoIngresado[1], &codigoIngresado[2], &codigoIngresado[3]);
		
		// Verificar si el código ingresado es correcto
		int codigoCorrectoFlag = 1;
		for (int i = 0; i < 4; i++) {
			if (codigoIngresado[i] != codigoCorrecto[i]) {
				codigoCorrectoFlag = 0;
				break;
			}
		}
		
		if (codigoCorrectoFlag) {
			printf("Codigo correcto. Acceso permitido.\n");
			return 1; 
		} else {
			printf("Numero de targeta incorrecto. Intente nuevamente.\n");
			intentos++;
		}
	}
	
	printf("La cuenta sera bloqueada por proteccion.\n");
	return 0; 
}

// Funcion para verificar el NIP
void verificarNIP(int nipCorrecto[]) {
	int intentos = 0;
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
			printf("NIP correcto. Acceso permitido.\n");
			return; 
		} else {
			printf("NIP incorrecto. Intente nuevamente.\n");
			intentos++;
		}
	}
	
	printf("Puede que su cuenta este siendo robada. Se bloqueara temporalmente.\n");
}

// Funcion para consultar saldo
void consultarSaldo(int saldo) {
	printf("Su saldo actual es: $%d\n", saldo);
}

// Funcion para retirar dinero
int retirarDinero(int saldo) {
	int cantidad;
	
	printf("Ingrese la cantidad a retirar. Solo multiplos de 100:\n");
	scanf("%d", &cantidad);
	
	if (cantidad % 100 != 0) {
		printf("La cantidad ingresada no es un multiplo de 100. Por favor, intente de nuevo.\n");
		return saldo;
	}
	
	if (cantidad > 5000) {
		printf("Ha alcanzado la cantidad de retiro máximo. Por favor, ingrese una cantidad más pequeña.\n");
		return saldo;
	}
	
	if (saldo < cantidad) {
		printf("Lo sentimos, no cuenta con los fondos suficientes.\n");
		return saldo;
	}
	
	saldo -= cantidad;
	printf("Retiro exitoso.\n");
	printf("Su saldo actual es: $%d\n", saldo);
	return saldo;
}

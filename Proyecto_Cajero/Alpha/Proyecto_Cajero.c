#include <stdio.h>
#include <stdlib.h>

// Prototipos de las funciones
int verificarCodigo();
int verificarNIP();
void consultarSaldo(int saldo);
int retirarDinero(int saldo);
int donar(int saldo);
void imprimirTicket(int numMovimientos, int saldo, char numeroCuenta[]);

int main(int argc, char *argv[]) {
	int opcion;
	int saldo = 7000; 
	int numMovimientos = 0;
	int deseaTicket = 0; 
	char numeroCuenta[] = "**** **** **** 2367"; 
	
	printf("Bienvenido al cajero G3\n");
	printf("Por favor, ingrese su numero de tarjeta y NIP\n");
	
	if (verificarCodigo() == 1 && verificarNIP() == 1) { 
		printf("Acceso permitido.\n");
	} else {
		return 0;
	}
	
	do {
		printf("\nOpciones:\n");
		printf("1. Consultar saldo\n");
		printf("2. Retirar dinero\n");
		printf("3. Donar\n");
		printf("4. Salir\n");
		printf("Ingrese el numero de opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion) {
		case 1:
			consultarSaldo(saldo);
			break;
		case 2:
			saldo = retirarDinero(saldo);
			numMovimientos++;
			break;
		case 3:
			saldo = donar(saldo);
			numMovimientos++;
			break;
		case 4:
			if (numMovimientos > 0 && deseaTicket == 0) {
				printf("¿Desea imprimir el ticket? (1 para Si, 0 para No): ");
				scanf("%d", &deseaTicket);
				if (deseaTicket == 1) {
					imprimirTicket(numMovimientos, saldo, numeroCuenta);
				}
			}
			printf("Gracias por utilizar nuestro servicio.\n");
			break;
		default:
			printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");
			break;
		}
		
		printf("\nPresione Enter para continuar...");
		while (getchar() != '\n'); 
		getchar(); // Esperar a que el usuario presione Enter
		
		system("cls");
	} while (opcion != 4);
	
	return 0;
}

// Funcion para verificar el numero de tarjeta 
int verificarCodigo() {
	int intentos = 0;
	int codigoCorrecto[4] = {2, 3, 6, 7};
	int codigoIngresado[4];
	
	while (intentos < 3) {
		printf("Ingrese su numero de tarjeta (2, 3, 6, 7):\n");
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

// Funcion para verificar el NIP
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
				printf("El numero NIP es incorrecto. Intente nuevamente.\n");
			} else {
				printf("El numero NIP es incorrecto.\n");
			}
			intentos++;
		}
	}
	
	printf("Puede que su cuenta este siendo robada. Se bloqueara temporalmente.\n");
	return 0; 
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
	
	if (cantidad % 100 != 0 || cantidad <= 0) {
		printf("Cantidad invalida. Debe ser un multiplo de 100 y mayor que cero.\n");
		return saldo;
	}
	
	if (cantidad > 5000) {
		printf("Ha alcanzado el limite de retiro diario. Por favor, ingrese una cantidad menor.\n");
		return saldo;
	}
	
	if (saldo < cantidad) {
		printf("Fondos insuficientes.\n");
		return saldo;
	}
	
	saldo -= cantidad;
	printf("Retiro exitoso.\n");
	printf("Su saldo actual es: $%d\n", saldo);
	return saldo;
}

// Funcion para donar dinero
int donar(int saldo) {
	int opcionDonacion;
	int cantidadDonacion;
	
	printf("Opciones de donacion:\n");
	printf("1. $10\n");
	printf("2. $20\n");
	printf("3. $50\n");
	printf("4. $100\n");
	printf("5. Ingresar otra cantidad\n");
	printf("Seleccione la opcion de donacion: ");
	scanf("%d", &opcionDonacion);
	
	switch (opcionDonacion) {
	case 1:
		cantidadDonacion = 10;
		break;
	case 2:
		cantidadDonacion = 20;
		break;
	case 3:
		cantidadDonacion = 50;
		break;
	case 4:
		cantidadDonacion = 100;
		break;
	case 5:
		printf("Ingrese la cantidad a donar: $");
		scanf("%d", &cantidadDonacion);
		if (cantidadDonacion <= 0) {
			printf("Cantidad invalida. Debe ser mayor que cero.\n");
			return saldo;
		}
		break;
	default:
		printf("Opcion invalida. La donacion sera de $0\n");
		cantidadDonacion = 0;
		break;
	}
	
	if (saldo < cantidadDonacion) {
		printf("Fondos insuficientes para realizar la donacion.\n");
		return saldo;
	}
	
	saldo -= cantidadDonacion;
	printf("Donacion de $%d exitosa. Gracias por su contribucion.\n", cantidadDonacion);
	printf("Su saldo actual es: $%d\n", saldo);
	
	return saldo;
}

// Funcion para imprimir ticket
void imprimirTicket(int numMovimientos, int saldo, char numeroCuenta[]) {
	printf("\n========== TICKET ==========\n");
	printf("Nombre del cajero: Cajero G3\n");
	printf("Detalles de cuenta: %s\n", numeroCuenta);
	printf("Saldo: $%d\n", saldo);
	printf("Movimientos realizados: %d\n", numMovimientos);
	printf("Tipo de transaccion: ");
	if (numMovimientos > 1) {
		printf("\nRetiro de efectivo\nDonacion de dinero\n");
	} else if (numMovimientos == 1) {
		printf("Retiro de efectivo\n");
	} else {
		printf("No se realizaron transacciones\n");
	}
	printf("============================\n\n");
}



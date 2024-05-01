#include <stdio.h>

int donar(int saldo) {
	int opcionDonacion;
	int cantidadDonacion;
	
	printf("Opciones de donación:\n");
	printf("1. $10\n");
	printf("2. $20\n");
	printf("3. $50\n");
	printf("4. $100\n");
	printf("5. Ingresar otra cantidad\n");
	printf("Seleccione la opción de donación: ");
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
			printf("Cantidad inválida. Debe ser mayor que cero.\n");
			return saldo;
		}
		break;
	default:
		printf("Opción inválida. La donación será de $0\n");
		cantidadDonacion = 0;
		break;
	}
	
	if (saldo < cantidadDonacion) {
		printf("Fondos insuficientes para realizar la donación.\n");
		return saldo;
	}
	
	saldo -= cantidadDonacion;
	printf("Donación de $%d exitosa. Gracias por su contribución.\n", cantidadDonacion);
	printf("Su saldo actual es: $%d\n", saldo);
	
	return saldo;
}

int main(int argc, char *argv[]) {
	int saldo = 10000;
	saldo = donar(saldo);
	return 0;
}


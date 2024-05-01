#include <stdio.h>

int retirarDinero(int saldo) {
	int cantidad;
	
	printf("Ingrese la cantidad a retirar. Solo múltiplos de 100:\n");
	scanf("%d", &cantidad);
	
	if (cantidad % 100 != 0 || cantidad <= 0) {
		printf("Cantidad inválida. Debe ser un múltiplo de 100 y mayor que cero.\n");
		return saldo;
	}
	
	if (cantidad > 5000) {
		printf("Ha alcanzado el límite de retiro diario. Por favor, ingrese una cantidad menor.\n");
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

int main(int argc, char *argv[]) {
	int saldo = 10000;
	saldo = retirarDinero(saldo);
	return 0;
}


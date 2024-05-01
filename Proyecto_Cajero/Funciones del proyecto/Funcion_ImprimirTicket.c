#include <stdio.h>

void imprimirTicket(int numMovimientos, int saldo, char numeroCuenta[]) {
	printf("\n========== TICKET ==========\n");
	printf("Nombre del cajero: Cajero G3\n");
	printf("Detalles de cuenta: %s\n", numeroCuenta);
	printf("Saldo: $%d\n", saldo);
	printf("Movimientos realizados: %d\n", numMovimientos);
	printf("Tipo de transacción: ");
	
	if (numMovimientos > 1) {
		printf("\nRetiro de efectivo\nDonación de dinero\n");
	} else if (numMovimientos == 1) {
		printf("Retiro de efectivo\n");
	} else {
		printf("No se realizaron transacciones\n");
	}
	
	printf("============================\n\n");
}

int main(int argc, char *argv[]) {
	
	char numeroCuenta[] = "1234567890"; 
	int saldo = 5000; 
	int numMovimientos = 2; 
	
	imprimirTicket(numMovimientos, saldo, numeroCuenta);
	
	return 0;
}


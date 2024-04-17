#include <stdio.h>

int main(int argc, char *argv[]) {
	int arreglo[4] = {10, 15, 23, 40};
	int numeroe = 40;
	
	printf("Arreglo:\n");
	for (int i = 0; i < 4; i++) {
		printf("%d ", arreglo[i]);
		if (arreglo[i] == numeroe) {
			printf("Se encontro el numero en la posicion: %d", i);
			break; // Salir del  si se encuentra el número
		} 
			
		
	}
	//printf("\nEse número no existe en el arreglo");
	return 0;
}


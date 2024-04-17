#include <stdio.h>

// Función para mostrar los elementos del arreglo
void mostrarArreglo(int arreglo[], int longitud) {
	printf("Elementos del arreglo:\n");
	for (int i = 0; i < longitud; i++) {
		printf("Posicion %d: %d\n", i, arreglo[i]);
	}
}

// Función para sumar todos los elementos del arreglo
int sumarArreglo(int arreglo[], int longitud) {
	int suma = 0;
	for (int i = 0; i < longitud; i++) {
		suma += arreglo[i];
	}
	return suma;
}

// Función para sumarle 2 a cada elemento del arreglo
void sumarDosArreglo(int arreglo[], int longitud) {
	for (int i = 0; i < longitud; i++) {
		arreglo[i] += 2;
	}
}

int main(int argc, char *argv[]) {
	int arregloInicial[4] = {1, 2, 3, 4};
	int opcion;
	
	do {
		printf("\n--------------------\n");
		printf("1 Mostrar elementos del arreglo\n");
		printf("2 Sumar todos los elementos del arreglo\n");
		printf("3 A cada elemento del arreglo sumarle 2\n");
		printf("4 Salir del programa\n");
		printf("--------------------\n");
		scanf("%d", &opcion);
		
		switch (opcion) {
		case 1:
			mostrarArreglo(arregloInicial, 4);
			break;
		case 2:
			printf("La suma de los elementos del arreglo es %d\n", sumarArreglo(arregloInicial, 4));
			break;
		case 3:
			sumarDosArreglo(arregloInicial, 4);
			printf("Se han sumado 2 a cada elemento del arreglo.\n");
			break;
		case 4:
			printf("Saliendo....\n");
			break;
		default:
			printf("Esa opción no está en el menú\n");
		}
	} while (opcion != 4);
	
	return 0;
}


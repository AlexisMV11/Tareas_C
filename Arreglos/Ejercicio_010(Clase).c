#include <stdio.h>

// Funci�n para verificar si el n�mero 10 est� presente en el arreglo
int verificarNumero10(int arreglo[], int n) {
	for (int i = 0; i < n; i++) {
		if (arreglo[i] == 10) {
			return 1; // El n�mero 10 est� presente
		}
	}
	return 0; // El n�mero 10 no est� presente
}

// Funci�n para ordenar el arreglo de menor a mayor
void ordenarArreglo(int arreglo[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arreglo[j] > arreglo[j + 1]) {
				int temp = arreglo[j];
				arreglo[j] = arreglo[j + 1];
				arreglo[j + 1] = temp;
			}
		}
	}
}

// Funci�n para sumar los elementos impares del arreglo
int sumarImpares(int arreglo[], int n) {
	int suma = 0;
	for (int i = 0; i < n; i++) {
		if (arreglo[i] % 2 != 0) {
			suma += arreglo[i];
		}
	}
	return suma;
}

int main(int argc, char *argv[]) {
	
	int arreglo[] = {23, 5, 44, 3, 10};
	int n = sizeof(arreglo) / sizeof(arreglo[0]);
	
	int contieneNumero10 = verificarNumero10(arreglo, n);
	
	if (contieneNumero10) {
		// Ordenar el arreglo de menor a mayor
		ordenarArreglo(arreglo, n);
		
		printf("Arreglo ordenado de menor a mayor:\n");
		for (int i = 0; i < n; i++) {
			printf("%d ", arreglo[i]);
		}
		printf("\n");
	} else {
		// Sumar los elementos impares del arreglo
		int sumaImpares = sumarImpares(arreglo, n);
		
		printf("El n�mero 10 no est� presente en el arreglo.\n");
		printf("La suma de los elementos impares es: %d\n", sumaImpares);
	}
	
	return 0;
}


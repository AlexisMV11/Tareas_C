#include <stdio.h>

int main() {
	int i, j, temp;
	int array[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(array) / sizeof(array[0]);
	
	printf("Arreglo original:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	printf("\n\n");
	
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n-i-1; j++) {
			if (array[j] > array[j+1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	printf("Arreglo ordenado en forma ascendente:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", array[i]);
	}
	
	printf("\n\nArreglo ordenado en forma descendente:\n");
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", array[i]);
	}
	
	return 0;
}






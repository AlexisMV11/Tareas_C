#include <stdio.h>

int main(int argc, char *argv[]) {

	int i, j, temp;
	int array[7] = {64, 34, 25, 12, 22, 11, 90};
	
	
	printf("Arreglo original:\n");
	for (int i = 0; i < 7; i++) {
		printf("%d ", array[i]);
	}
	printf("\n\n");
	
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 7; j++) {
			if (array[j] > array[j+1]) {
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	printf("Arreglo ordenado en forma ascendente:\n");
	for (int i = 0; i < 7; i++) {
		printf("%d ", array[i]);
	}
	
	printf("\n\nArreglo ordenado en forma descendente:\n");
	for (int i = 7 - 1; i >= 0; i--) {
		printf("%d ", array[i]);
	}
	
	return 0;
}


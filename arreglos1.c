#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Realizar un codigo que pida 5 calificaciones y calcular el promedio de ellas
	
	float calf[5]; 
	float prom = 0;
	
	for (int i = 0; i <= 5; i++){
		printf("Ingresa tu calififcacion %d:  ", i + 1);
		scanf("%f",&calf[i]);
		prom += calf[i];
		printf("\n");
	}
	
	printf("El promedio de las calificaciones es:  %.2f\n\n", prom / 5);
	
	return 0;
}


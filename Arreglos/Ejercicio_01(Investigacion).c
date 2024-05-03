#include <stdio.h>

/*Programa que calcula el promedio de un alumno utilizando arreglos*/

int main(int argc, char *argv[]) {
	
	//Definimos el arreglo
	float calificaciones[5];//El tamaño de 5 para almacenar las calificaciones
	float suma = 0.0;
	float promedio;
	
	//Se solicita al usuario ingresar las calificaciones
	printf("Ingrese sus 5 calificaiones:\n");
	for (int i = 0; i < 5; i++){
		printf("Calificacion %d: ", i + 1);
		scanf("%f", &calificaciones[i]);
		
		//Añadimos las calificaciones a la suma toal
		suma += calificaciones[i];
	}
	
	//Calculamos el promedio
	promedio = suma / 5.0;
	
	printf("\nEl promedio obtenido en este semestre fue %.2f\n", promedio);
	return 0;
}


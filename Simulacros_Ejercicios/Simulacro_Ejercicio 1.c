#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int inicio, fin, suma = 0, cont = 0, i;
	//int inicioDef;
	float prom;
	
	printf("Ingresa dos numeros enteros diferentes\n");
	scanf("%d %d", &inicio, &fin);
	if (inicio > fin){
		printf("El numero de Inicio no puede ser mayor al numero de Fin");
		return 1;
	}
	
	//inicio = inicioDef;
	
	//while (inicio > fin){
		
		//if (inicioDef < fin){
			//printf("El numero de Inicio no puede ser mayor al numero de Fin");
			
			//printf("Vuelve a intentarlo...");
			//scanf("%d", &inicio);
		//}
	//}
	
	printf("Los numeros ingresados son: %d para el inicio y %d para el fin\n\n", inicio, fin);
	i = inicio;
	
	do{
		
		printf("%d ", i);
		suma += i;
		cont ++;
		i ++;
		
	} while(i <= fin);
	
	prom = (float)suma / cont;
	
	printf("\n\nLa suma de los numeros es: %d\n", suma);
	printf("El promedio de los numeros es: %.2f\n", prom);
	
	return 0;
}


#include <stdio.h>

int main(int argc, char *argv[]) {
	
		
		int arregloincial[4]={1,2,3,4};
		int opcion;
		int suma;
		suma =0;
		
		do{
			
			printf("\n--------------------\n");
			printf("1 Mostrar elementos del arreglo\n");
			printf("2 Sumar todos los elementos del arreglo\n");
			printf("3 A cada elemento del arreglo sumarle 2\n");
			printf("4 Salir del programa\n");
			printf("--------------------\n");
			scanf("%d",&opcion);
			
			switch(opcion){
			case 1:
				for(int i =0; i <=3; i++){
					printf("%d",i);
						printf(" Elementos del arreglo %d\n",arregloincial[i]);
				}
				break;
			case 2:
				for(int i =0; i <=3; i++){
					suma =suma + arregloincial[i];
				}
				printf("La suma de los elementos del arreglo es %d ",suma);
				break;
			case 3:
				for(int i =0; i <=3; i++){
					arregloincial[i] = arregloincial[i] + 2;
					printf("Elementos del arreglo modificados %d\n",arregloincial[i]);
				}
				break;
			case 4: 
				printf("Saliendo....");
				break;
			default:
				printf("Esa opcion no esta en el menu");
			}
			
			
		} while(opcion!=4);
	
	return 0;
}


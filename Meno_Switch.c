#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int opc; 
	int n1, n2, r;
	n1 = 89;
	n2 = 60	;
	
	do {
		
		printf("\n------------------MENU------------------");
		printf("\n1 Ciclo del 1 al 10 con ciclo While");
		printf("\n2 Ciclo del 1 al 5 con ciclo For");
		printf("\n3 Suma de dos numeros enteros");
		printf("\n4 Para salir del Programa");
		printf("\n------------------------------------------\n");
		scanf("%d", &opc);
		
		int cont = 1;
		switch (opc){
		case 1:
			while (cont <= 10) {
				printf ("numero: %d\n", cont);
				cont ++;
			}
			break;
		case 2:
			for (int i = 0; i <= 5; i++) {
				printf("Numero: %d\n", i);
			}
			break;
		case 3:
			printf("Suma de dos numeros enteros");
			r = n1 + n2;
			printf("Resultado: %d\n", r);
			break;
		case 4:
			printf("Usted esta saliendo del menu\n");
			break;
		default:
			printf("Esta opccion no se encuentra disponible, porfavor elija nuevamente");
		}
	} while(opc != 4);
	return 0;
}


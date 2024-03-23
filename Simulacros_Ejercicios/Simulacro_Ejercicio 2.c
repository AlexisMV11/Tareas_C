#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float DistKm = 1.5, gasXlitro = 40; 
	float DistM, ConsXm, gas2000;
	
	DistM = DistKm * 1000;
	ConsXm = gasXlitro / DistM;
	gas2000 = ConsXm * 2000; 
	
	printf("Consumo de gasolina por metro recorrido: %.2f litros\n", ConsXm);
	printf("Gasolina necesaria para recorrer 2000 metros: %.2f\n", gas2000);
	
	return 0;
}


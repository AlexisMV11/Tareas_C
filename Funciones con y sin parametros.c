#include <stdio.h>

//Funcion que devuelve algo (int) y no tiene parametros
int multiplicacion() {
	int a, b, resultadoint;
	printf("Se ejecuta funcion Multiplicacion(int)\n");
	printf("Ingresa numero a\n");
	scanf("%d", &a);
	printf("Ingresa numero b\n");
	scanf("%d", &b);
	resultadoint = a * b;
	printf("Resultado: %d\n", resultadoint);
	return resultadoint;
}

//Funcion que devuelve algo (float) con parametros
float multiplicacion2(float c, float d) {
	printf("\nSe ejecuta funcion Multiplicacion(float)\n");
	float resultadofloat = c * d;
	return resultadofloat;
}

//Funcion que devuelve algo(int) con parametros
int suma (int e, int f) { //La funcion suma calcula la suma de dos numeros enteros
	printf("\nSe ejecuta funcion Suma(int)\n");
	int resultado = e + f;
	return resultado; //Devuelve el resultado de la suma
}

//La funcion main siempre se va a ejecutar primero
int main() { //La funcion 'main' llama a las demas funciones
	printf("Ejecutandoce main\n");
	multiplicacion();
	
	float w = 2.45, z = 9.20;
	float resultadomulti = multiplicacion2(w, z);
	printf("La multiplicacion entre %.2f y %.2f es: %.2f\n", w, z, resultadomulti);
	
	int x = 5, y = 3;
	//La funcion main almacena el resultado devuelto en una variable 'resultadosuma' 
	int resultadosuma = suma(x, y); //Se llama la funcion 'Suma' pasando 'X' y 'Y' como argumentos
	printf("La suma de %d y %d es: %d\n", x, y, resultadosuma);
	
	return 0;
}

//return se utiliza para finalizar la ejecución de una función y devolver un valor al punto de llamada.

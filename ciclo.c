#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int n1, n2, i;
	printf ("Introduce dos numeros enteros\n");
	scanf ("%d%d", &n1, &n2);
	printf ("\n");
	i = n1;
	while (i <= n2){
		printf ("numero: %d \n", i);
		i ++;
	}
	
	return 0;
}


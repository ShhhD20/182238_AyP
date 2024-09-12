#include <stdio.h>
#include <math.h>

int main (){ //El numero que se ingrese, hará una sumatoria de sus numeros naturales menores
	int a;
	int b;
	int c = 0;
	int d = 0;;
	
	printf("Ingrese numero para sumatoria: ");
	scanf("%d", &a);
	b = a;
	
	while (c <= a){
		d = d+c;
		c ++;
	}
	printf("%d", d);
	
	return 0;
}

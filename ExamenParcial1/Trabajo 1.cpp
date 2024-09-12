#include <stdio.h>
#include <math.h>

int main (){ //El numero que se ingrese, mostrará los siguientes 9 de una secuencia de +1
	int a;
	int b = 1;
	int c;
	
	printf("Ingrese numero a agregar los siguientes 10: ");
	scanf("%d", &a);
	printf("%d \n", a);
	
	while(b < 11){
		c = a+b;
		printf("%d\n", c);
		b ++;
	}
	
	return 0;
}

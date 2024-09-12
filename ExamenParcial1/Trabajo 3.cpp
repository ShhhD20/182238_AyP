#include <stdio.h>
#include <math.h>

int main (){ //Ingresa un numero (positivo o negativo) y te mostrará una tabla de multiplicaciones hasta el 10
	int a;
	int lim1 = 0;
	int b = 1;
	int c;
	
	printf("Que tabla de multiplicar quieres obtener: ");
	scanf("%d", &a);
	while (b <= 10){
		printf("%d x ", a);
		printf("%d = ", b);
		c = a*b;
		printf("%d \n", c);
		b++;
	}
	
	return 0;
}

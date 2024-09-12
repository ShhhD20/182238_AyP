#include <stdio.h>
#include <math.h>

int main (){
	int a;
	int b; // 1
	int c; // 2
	int d; // 3
	int e; // 4
	int f; // 5
	int g; // 6
	int h; // 7
	int i; // 8
	int j; // 9
	int operacion;
	
	printf("Ingresa un numero, y se sumaran sus digitos: ");
	scanf("%d", &a);
	if(a < 2147483647){
		b = a % 10;
		c = a % 100;
		d = a % 1000;
		e = a % 10000;
		f = a % 100000;
		g = a % 1000000;
		h = a % 10000000;
		i = a % 100000000;
		j = a % 1000000000;
		j = j - i;
		i = i - h;
		h = h - g;
		g = g - f;
		f = f - e;
		e = e - d;
		d = d - c;
		c = c - b;
		j = j/100000000;
		i = i/10000000;
		h = h/1000000;
		g = g/100000;
		f = f/10000;
		e = e/1000;
		d = d/100;
		c = c/10;
		operacion = b +c +d+ e+ f +g+ h+i+j;
		printf("%d", operacion);
	}
	else {
		printf("Valor rebasa 16 bits");
	}	
	return 0;
}

#include <stdio.h>

int perimetroFigura (int numero) {
	float perimetro;
	perimetro = 4 * numero;
	return  perimetro;
}

int areaFigura (int numero){
	int area = numero * numero;
	return area;
}

int main(){
	int num;
	
	printf("Lado de un cudadro: ");
	scanf("%d", &num);
	printf("Perimetro: %d\n", perimetroFigura (num));
	printf("Area: %d\n", areaFigura (num));
	
	return 0;
}

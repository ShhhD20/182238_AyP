#include <stdio.h>

int main(){
	int n1, n2, resultado, suma;
	
	printf("Introduzca un numero: ");
	scanf("%d",&n1);
	printf("Introduzca otro numero: ");
	scanf("%d",&n2);
	printf("Cuanto suman?: ");
	scanf("%d",&suma);
	resultado = n1 + n2;
	
	if (suma == resultado){
		printf("\nCorrecto");
	}
	else {
		printf("\nINCORRECTO: La suma es %d", resultado);
	}
	
	return 0;
	}

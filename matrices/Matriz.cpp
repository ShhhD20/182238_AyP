#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int matriz[5][5];
	int operador;
	int b = 0;
	srand(time(NULL));
	
	for(int a = 0; a < 5; a++){
		matriz[a][0] = rand() % 10;
		matriz[a][1] = rand() % 10;
		matriz[a][2] = rand() % 10;
		matriz[a][3] = rand() % 10;
		matriz[a][4] = rand() % 10;
		
		printf("\n  %d", matriz[a][0]);
		printf("\t%d", matriz[a][1]);
		printf("\t%d", matriz[a][2]);
		printf("\t%d", matriz[a][3]);
		printf("\t%d", matriz[a][4]);
		
		operador += matriz[a][b];
		b++;
	}
	printf("\nSuma de la diagonal: %d", operador);
	
	return 0;
}

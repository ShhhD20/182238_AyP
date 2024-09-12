#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int arreglo1 [5];
	int arreglo2 [5];
	int calc [5];
	int simbolo;
	int ei = -100;
	int bueno[5];
	srand(time(NULL));
	
	for (int a = 0; a < 10; a++) arreglo1 [a] = rand() % 100;
	for (int d = 0; d < 5; d++) arreglo2 [d] = rand() % 100;
	do {
		printf("[1] suma\n[2] resta\n[3] multiplicar\n[4] dividir\n");
		printf("Ingrese tipo de operacion que desea usar: ");
		scanf("%d", &simbolo);
	} while(simbolo > 4 || simbolo < 1);
	
	for (int b = 0; b < 5; b++){
		switch(simbolo){
			case 1:
				calc[b] = arreglo1[b] + arreglo2[b];
				break;
			case 2:
				calc[b] = arreglo1[b] - arreglo2[b];
				break;
			case 3:
				calc[b] = arreglo1[b] * arreglo2[b];
				break;
			case 4:
				calc[b] = arreglo1[b] / arreglo2[b];
				break;
		}
	}
	for(int c = 0; c < 5; c++) printf("numero %d: %d\n", c, calc[c]);
	
	for(int i = -1; i < 4; i++){
		for (int e = 0; e < 5; e++){
			if (ei < calc[e]){
					ei = calc[e];
					if(bueno[i] < ei){
						
					}
			}
			bueno[e] = ei;
		}
	}
	for(int f = 0; f < 5; f++){
		printf("\nOrganizado: %d", bueno[f]);
	}
	
	return 0;
}

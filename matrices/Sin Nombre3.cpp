#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int ans = 3;
	int operacion = 0;
	int cres = 0;
	srand(time(NULL));
	
	int matriz1[ans][ans], matriz2[ans][ans];
	int Mfinal[ans][ans];
	for(int a = 0; a < ans; a++){
		for(int b = 0; b < ans; b++){
			matriz1[a][b] = rand() % 6;
			matriz2[a][b] = rand() % 6;
			printf("  %d", matriz1[a][b]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(int c = 0; c < ans; c++){
		for(int d = 0; d < ans; d++){
			printf("  %d", matriz2[c][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(int e = 0; e < ans; e++){
		for(int f = 0; f < ans; f++){
			operacion = matriz1[e][f] * matriz2[f][e];
		}
		Mfinal[e][cres];
		
	}

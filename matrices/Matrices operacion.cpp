#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

int main (){
	int ans, res;
	int operador;
	int r = 0;
	setlocale(LC_ALL, "");
	srand(time(NULL));
		
	do{
		printf("[1] Suma \t[2] Resta \t[3] Multiplicación \n[4] Diagonal \t[5] Suma trianglular superior \n[0] Finalizar \nPor favor ingrese que acción desea hacer: ");
		scanf("%d", &ans);
		printf("Ingrese la longitud de la matriz: ");
		scanf("%d", &res);
		printf("Matriz aleatoria...\n\n");
		int Matriz[res][res], Matriz2[res][res], Main[res][res];;
		for(int a = 0; a < res; a++){
			for(int b = 0; b < res; b++){
				Matriz[a][b] = rand() % 10;
				printf("%d  ", Matriz[a][b]);
			}
			printf("\n");
		}
		if(ans == 1 || ans == 2 || ans == 3){
			printf("\nMatriz aleatoria 2...\n\n");
			for(int c = 0; c < res; c++){
				for(int d = 0; d < res; d++){
					Matriz2[c][d] = rand() % 10;
					printf("%d  ", Matriz2[c][d]);
				}
			printf("\n");
			}
		}
		switch(ans){
			case 1: // Suma
				printf("\nSuma de matrices\n");
				for(int e = 0; e < res; e++){
					for(int f = 0; f < res; f++){
						Main[e][f] = Matriz[e][f] + Matriz2[e][f];
						printf("%d  ", Main[e][f]);
					}
					printf("\n");
				}
				break;
			case 2: // Resta
				printf("\nResta de matrices\n");
				for(int e = 0; e < res; e++){
					for(int f = 0; f < res; f++){
						Main[e][f] = Matriz[e][f] - Matriz2[e][f];
						printf("%d  ", Main[e][f]);
					}
					printf("\n");
				}
				break;
			case 3: // Multiplicación
				printf("\nMultiplicación de matrices\n");
				for(int e = 0; e < res; e++){
					for(int f = 0; f < res; f++){
						Main[e][f] = 0;
						for(int g = 0; g < res; g++){
							Main[e][f] += (Matriz[e][g] * Matriz2[g][f]);
						}
						printf("%d  ", Main[e][f]);
					}
					printf("\n");
				}
				break;
			case 4: // Diagonal
				printf("\nDiagonal de la matriz\n");
				operador = 0;
				for(int e = 0; e < res; e++){
					operador += Matriz[e][e];
				}
				printf("La suma de la diagonal de la matriz es: %d\n", operador);
				break;
			case 5: // Suma triangular superior
				printf("\nSuma triangular superior de la matriz\n");
				operador = 0;
				for(int e = 0; e < res; e++){
					for(int f = 0; f < res; f++){
						if(e < f){
							operador += Matriz[e][f];
						}
					}
				}
				printf("Suma triangular superior: %d\n", operador);
				break;
		}
		printf("\n"); 
	}while (ans != 0);
	
	return 0;
}

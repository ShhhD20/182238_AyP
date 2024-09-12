#include <stdio.h>
#include <iostream>
#include <windows.h>

int main (){
	int res; //respuesta
	int esp; //espacios
	int lim2; //lo mismo que "esp" pero para mantener las constantes
	int menos = 1;
	int sum = 0;
	int base = 0;
	int design;
	int color = 0;
	setlocale(LC_ALL, "");
	
	while(!(design == 1 || design == 2)){
		printf("¿El arbol normal(1) o de cabeza?(2): ");
		scanf("%d", &design);
		if (!(design == 1 || design == 2)){
			printf("\t¡¡Error!! - Intente con otro valor \n\n");
		}
	}
	printf("¿De que tamaño quieres el arbol?: ");
	scanf("%d", &res);
	
	esp = res + 1;
	lim2 = esp;
	
	printf("\n");
	
	if (design == 1){ //boca arriba
		for(int lim1 = 0; lim1 < res; lim1 ++){
			while (lim2 > 1){
				printf(" ");
				lim2 -= 1;
			}
			while (sum < menos){
				printf("/");
				sum += 1;
			}
			
			sum = 0;
			while (sum < menos){
				printf("\\");
				sum += 1;
			}
			printf("\n");
			
			sum = 0;
			lim2 = esp - menos;
			menos ++;
		}
		base = 1;
		while (base < esp){
			printf(" ");
			base ++;
		}
		printf("|| \n");
		base = 2;
		while (base < esp){
			printf(" ");
			base ++;
		}
		printf("====");

		while (color < 20){
			system("color 0A");
			Sleep(650);
			system("color 02");
			Sleep(650);	
			system("color 0F");
			Sleep(650);
		}
	}
	
	if (design == 2){ //boca abajo
		for(int lim1 = 0; lim1 < res; lim1 ++){
			while (lim2 > 1){
				printf(" ");
				lim2 -= 1;
			}
			while (sum < menos){
				printf("/");
				sum += 1;
			}
			
			sum = 0;
			while (sum < menos){
				printf("\\");
				sum += 1;
			}
			printf("\n");
			
			sum = 0;
			lim2 = esp - menos;
			menos ++;
		}
		base = 1;
		while (base < esp){
			printf(" ");
			base ++;
		}
		printf("|| \n");
		base = 2;
		while (base < esp){
			printf(" ");
			base ++;
		}
		printf("====");

		while (color < 20){
			system("color 0A");
			Sleep(650);
			system("color 02");
			Sleep(650);	
			system("color 0F");
			Sleep(650);
		}
	}
		
	return 0;
}

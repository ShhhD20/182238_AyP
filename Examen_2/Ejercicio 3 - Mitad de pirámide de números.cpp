#include <stdio.h>

int main (){
	int ans;
	
	printf("Numero de lineas en la piramide: ");
	scanf("%d", &ans);
	
	for(int a = 1; a <= ans; a++){
		for(int b = 1; b <= a; b++){
			printf("%d ", b);
		}
		printf("\n");
	}
	
	return 0;
}

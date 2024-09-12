#include <stdio.h>

int main (){
	int ans;
	
	printf("Ingrese un año: ");
	scanf("%d", &ans);
	
	if ((ans % 4 == 0) && (!((ans % 100 == 0) && (ans % 400 != 0)))){
		printf("El agno %d es viciesto", ans);
	}
	else printf("El agno %d NO es viciesto", ans);
	
	return 0;
}

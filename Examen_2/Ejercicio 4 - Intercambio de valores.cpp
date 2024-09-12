#include <stdio.h>

int main(){
	int v1, v2, v3, temp;
	
	printf("Ingrese el valor entero 1: ");
	scanf("%d", &v1);
	printf("Ingrese el valor entero 2: ");
	scanf("%d", &v2);
	printf("Ingrese el valor entero 3: ");
	scanf("%d", &v3);
	temp = v3;
	v3 = v2;
	v2 = v1;
	v1 = temp;
	printf(" v1 %d\n v2 %d\n v3 %d", v1, v2, v3);
	
	return 0;
}

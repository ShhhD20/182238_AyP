#include <stdio.h>

int main (){
	
	for(int a = 1; a <= 100; a++){
		printf("El %d, ", a);
		if(a%3 == 0){
			printf("es multiplo de 3\n");
		}
		else{
			printf("NO es multiplo de 3\n");
		}
	}
	
	return 0;
}

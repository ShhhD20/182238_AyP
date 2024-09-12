#include <stdio.h>

int main() {
	char caracter;
	int countX = 0, countY = 1;
	bool condition;
	FILE *file = fopen("archivo.txt", "r");
	
	if (file== NULL) {
		perror("Error en la apertura del achivo");
		return 1;
	}
	
	condition = false;
	while(feof (file) == 0){
	caracter = fgetc (file);
	if (caracter == '\n'){
		condition = true;
		countY ++;
	}
		
	if(!condition)
	if(caracter == ' ')
		countX ++;
	}
	
	printf("[%d] [%d]", countX, countY);
	fclose(file);
	printf("\n\nTodo esta viento en popa... ...\n\n\n\n");
	return 0;
}

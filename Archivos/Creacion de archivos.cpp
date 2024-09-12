#include <stdio.h>

int main() {
	FILE *archivo;
	archivo = fopen("archivo.txt", "a");
	
	if (archivo == NULL) { 
		perror("Error al crear el archivo"); 
		return 1; 
	}
	
	fprintf(archivo, "Esto se agrega al final.\n");
	fclose (archivo);
	
	return 0;
}

#include <stdio.h>

int main(){
	float temp=26;
	float resultado;
	int userImput;

	do{
		std::count <<"Ingrese el valor de la temperatura: ";
	}	
	printf("Temperatura ingresada: %f \n", temp);
	resultado = (temp * 1.8) + 32;
	printf("Temperatura resultante: %f \n", resultado);
}

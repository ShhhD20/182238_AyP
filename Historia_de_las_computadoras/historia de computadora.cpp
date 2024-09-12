#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>
#include <iostream>

int main (int argc,char **argv)
{
	setlocale(LC_ALL, "");
	system("color F1");
	
	printf("---------------------------------------------------------------\n");
	printf("|Generaciones de computadoras                                 |\n");
	printf("|                                                             |\n");
	printf("|	Primera generación: 1940s - 1950s                     |\n");
	printf("| Uso de valvulas electronicas de vacio                       |\n");
	printf("| Grandes dimenciones                                         |\n");
	printf("| Programacion en Lenguaje de Máquina                         |\n");
	printf("|                                                             |\n");
	printf("|	Segunda generacion: 1950s - 1960s                     |\n");
	printf("| De valvulas a transistores                                  |\n");
	printf("| Reduccion de tamaño                                         |\n");
	printf("| Lenguajes de programacion mas avanzados                     |\n");
	printf("|                                                             |\n");
	printf("|	Tercera generacion: 1960s - 1970s                     |\n");
	printf("| Sistemas operativos y de multioperacion mas avanzados       |\n");
	printf("| Menor volumen y mayor capacidad                             |\n");
	printf("| Introdujeron circuitos integrados                           |\n");
	printf("|                                                             |\n");
	printf("|	Cuarta generacion: 1970s - 1980                       |\n");
	printf("| Un solo chip trabaja como varios microprocesadores          |\n");
	printf("| Adicion de memoria RAM                                      |\n");
	printf("| Computadoras personales ''PCs''                             |\n");
	printf("|                                                             |\n");
	printf("|	Quinta generacion: 1980s - Presente                   |\n");
	printf("| Microprocesadores mucho mas poderosos                       |\n");
	printf("| Desarollo de tecnologia de red                              |\n");
	printf("| Sistemas operativos intuitivos y facil de usar              |\n");
	printf("---------------------------------------------------------------\n");
	return 0;
}

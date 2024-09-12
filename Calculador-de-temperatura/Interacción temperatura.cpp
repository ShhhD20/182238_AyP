#include <stdio.h>
#include <iostream>
#include <windows.h>

int main(){
	float temp;
	float resultado;
	char unidad;
	char unidad2;	
	int color;

	setlocale(LC_ALL, "");
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	color = 15; //Los colores van de 0-15	//De ahí los valores cambian el remarcado
	SetConsoleTextAttribute(hConsole, color);
	printf("\t\t- Calculadora de temperatura - \n");
	
	color = 8;
	SetConsoleTextAttribute(hConsole, color);
	
	std::cout << "Ingrese la letra de la unidad de medida que va a usar: ";
	std::cin >> unidad;
	
	if (unidad == 'C' || unidad == 'c'){ //antes lo escribí como	//if (unidad == 'C' || 'c')
		color = 2;
		SetConsoleTextAttribute(hConsole, color);
		std::cout << "\n	Temperatura seleccionada - Celcius \n";
		
		color = 8;
		SetConsoleTextAttribute(hConsole, color);
		std::cout << "¿A que unidad desea convertir? (F / K): ";
		
		std::cin >> unidad2;
		
		if (unidad2 == 'F' || unidad2 == 'f'){
			std::cout << "\n Ingrese el valor de la temperatura: ";
			std::cin >> temp;
			resultado = (temp * 1.8) + 32;
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			std::cout << "Temperatura calculada a farenheit: " << resultado << "°F";
		}
		else if (unidad2 == 'K' || unidad2 == 'k'){
			std::cout << "\n Ingrese el valor de la temperatura: ";
			std::cin >> temp;
			resultado = temp + 273.15;
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			std::cout << "Temperatura calculada a kelvin: " << resultado << "°K";
		}

	}
	if (unidad == 'F' || unidad == 'f'){
		color = 9;
		SetConsoleTextAttribute(hConsole, color);
		std::cout << "\n	Temperatura seleccionada - Farenheit \n";
		
		color = 8;
		SetConsoleTextAttribute(hConsole, color);
		std::cout << "¿A que unidad desea convertir? (C / K): ";
		std::cin >> unidad2;
		
		if (unidad2 == 'C' || unidad2 == 'c'){
			std::cout << "\n Ingrese el valor de la temperatura: ";
			std::cin >> temp;
			resultado = (temp - 32) * 0.55555;
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			std::cout << "Temperatura calculada a celcius: " << resultado << "°C";
		}
		else if (unidad2 == 'K' || unidad2 == 'k'){
			std::cout << "\n Ingrese el valor de la temperatura: ";
			std::cin >> temp;
			resultado = ((temp - 32) * 0.55555) + 273.15;
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			std::cout << "Temperatura calculada a kelvin: " << resultado << "°K";
		}

	}
	if (unidad == 'K' || unidad == 'k'){
		color = 6;
		SetConsoleTextAttribute(hConsole, color);
		std::cout << "\n	Temperatura seleccionada - Kelvin \n";
		
		color = 8;
		SetConsoleTextAttribute(hConsole, color);
		std::cout << "¿A que unidad desea convertir? (C / F): ";
		std::cin >> unidad2;
		
		if (unidad2 == 'C' || unidad2 == 'c'){
			std::cout << "\n Ingrese el valor de la temperatura: ";
			std::cin >> temp;
			resultado = temp - 273.15;
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			std::cout << "Temperatura calculada a celcius: " << resultado << "°C";
		}
		else if (unidad2 == 'F' || unidad2 == 'f'){
			std::cout << "\n Ingrese el valor de la temperatura: ";
			std::cin >> temp;
			resultado = ((temp - 273.15) * 1.8) + 32 ;
			color = 15;
			SetConsoleTextAttribute(hConsole, color);
			std::cout << "Temperatura calculada a farenheit: " << resultado << "°F";
		}
	}
		else{
		std::cout <<"\t\t ¿Y esa letra cual es?";
	}
	color = 8;
	SetConsoleTextAttribute(hConsole, color);
	
	return 0;
}

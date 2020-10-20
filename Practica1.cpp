//============================================================================
// Name        : Practica1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include "funciones.h"
using namespace std;

int main() {
	//este va a ser el menu para nuestro programa
	std::cout << "Por favor introduzca que es lo que desea hacer" << '\n';
	std::cout << "1: Introducir los vectores con los que desea trabajar" << '\n';
	std::cout << "2: Suma de vectores" << '\n';
	std::cout << "3: Resta de vectores" << '\n';
	std::cout << "4: Salir del programa" << '\n';

	int temp;

	while (temp != 4) {
		std::cin >> temp;
		std::vector<int> v1;
		std::vector<int> v2;

		if (temp==1) {
			//ejecutar la introduccion de vectores
			std::cout << "opcion 1" << '\n';
			v1= introVectores();
		} else if (temp==2) {
			std::cout << "opcion 2" << '\n';
			//vector<int> v3= sumaVectores(v1, v2);
		} else if(temp==3){
			std::cout << "opcion 3" << '\n';
			//ejecutar resta de vectores
		} else if(temp==4){
			std::cout << "Hasta luego" << '\n';
		}
	}


	return 0;
}

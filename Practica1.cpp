//============================================================================
// Name        : Practica1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//este va a ser el menu para nuestro programa
	std::cout << "Por favor introduzca que es lo que desea hacer" << '\n';
	std::cout << "1: Introducir los vectores con los que desea trabajar" << '\n';
	std::cout << "2: Suma de vectores" << '\n';
	std::cout << "3: Resta de vectores" << '\n';

	int temp;
	std::cin >> temp;

	if (temp==1) {
		//ejecutar la introduccion de vectores
	} else if (temp==2) {
		//ejecutar suma de vectores
	} else if(temp==3){
		//ejecutar resta de vectores
	}

	return 0;
}

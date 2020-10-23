<<<<<<< HEAD
//============================================================================
// Name        : Practica1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

=======
>>>>>>> developer
#include <iostream>
#include <vector>
#include <string>
#include "funciones.h"
using namespace std;

<<<<<<< HEAD
vector<int> introVectores(){

	printf("Introduzca el numero de elementos de su vector\n");
	int n;
	std::cin >> n;
	std::vector<int> v (n, 0);
	
	int i=0;
	while (i!= n) {
		int temp;
		std::cout << "Introduzca el valor de la posicion " << i << '\n';
		std::cin >> temp;
		v[i] = temp;
		i++;
	}

	return v;
}
=======
>>>>>>> developer

int main() {
	//este va a ser el menu para nuestro programa
	int temp;

	while (temp != 4) {
		std::cout << "Por favor introduzca que es lo que desea hacer" << '\n';
		std::cout << "1: Introducir los vectores con los que desea trabajar" << '\n';
		std::cout << "2: Suma de vectores" << '\n';
		std::cout << "3: Resta de vectores" << '\n';
		std::cout << "4: Salir del programa" << '\n';

		std::cin >> temp;
		std::vector<int> v1;
		std::vector<int> v2;

		if (temp==1) {
			//ejecutar la introduccion de vectores
			std::cout << "Introduzca el primer vector" << '\n';
			v1= introVectores();
			printf("Introduzca el segundo vector \n");
			v2= introVectores();
		} else if (temp==2) {
			vector<int> v3= sumaVectores(v1, v2);
<<<<<<< HEAD
		} else if(temp==3){
			//ejecutar resta de vectores
			vector<int> v3= restaVectores(v1, v2);
=======
			muestraVector(v3);
		} else if(temp==3){
			//ejecutar resta de vectores
			vector<int> v3= restaVectores(v1, v2);
			muestraVector(v3);

>>>>>>> developer
		} else if(temp==4){
			std::cout << "Hasta luego" << '\n';
		}
	}

	return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> developer

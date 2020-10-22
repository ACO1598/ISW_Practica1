#include <iostream>
#include <vector>
#include <string>
#include "funciones.h"
using namespace std;


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
			muestraVector(v3);
		} else if(temp==3){
			//ejecutar resta de vectores
			vector<int> v3= restaVectores(v1, v2);
			muestraVector(v3);

		} else if(temp==4){
			std::cout << "Hasta luego" << '\n';
		}
	}

	return 0;
}
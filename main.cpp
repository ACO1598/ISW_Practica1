#include <iostream>
#include <vector>
#include <string>
#include "funciones.h"
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v1 = {1,2,3};
	vector<int> v2 = {2,1,9};
	vector<int> v3 = sumaVectores(v1,v2);
	/*codigo añadido para mostrar por pantalla el resultado se puede borrar*/
	for(int i : v3)
	{
		cout << i << endl;
	};
}
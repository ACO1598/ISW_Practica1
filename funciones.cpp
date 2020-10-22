#include <iostream>
#include <vector>
#include <string> 
#include "funciones.h"
using namespace std;

vector<int> sumaVectores(vector<int> v1, vector<int> v2)
{
	if (v1.size()==v2.size())
	{
		int N;
		N = v1.size();
		vector<int> suma(N,0);
		for(int i = 0; i<N; i++)
		{
    	suma[i]=v1[i]+v2[i];
		}
		return suma;
	}	
	else{
		cout << "vectores de diferente tamaño" ;
		}
	
}
vector<int> restaVectores(vector<int> v1, vector<int> v2)
{
	if (v1.size() == v2.size())
	{
		int N;
		N = v1.size();
		vector<int> resta(N,0);

		for (int i = 0; i < N; i++)
		{
			resta[i] = v1[i] - v2[i];
		}
		return resta
	}
	else {
		cout << "vectores de diferente tamaño"
	}
	
}
vector<int> introVectores()
{

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
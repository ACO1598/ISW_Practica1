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
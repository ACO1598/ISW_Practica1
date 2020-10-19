#include <iostream>
#include <vector>
#include <string> 
#include "funciones.h"

vector<int> sumaVectores(vector<int> v1, vector<int> v2)
{
	if (v1.size()==v2.size())
	{
		int N;
		N = v1.size();
		for(int i = 0; i<N; i++)
		{
    	suma[i]=v1[i]+v2[i];
		}
		return suma;
	}	
	else{
		cout << "vectores de diferente tamaño" 
		}
	
}

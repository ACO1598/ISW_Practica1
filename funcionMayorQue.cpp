#include<vector>
#include<iostream>
using namespace std;

int funcionMayorQuw(int num,vector<int> v1 ) {
	
	for (int i = 0; i < v1.size(); i++) {
		if (num < v1[i]) {
			cout << "El numero en la posicion: " << i << " que es: " << v1[i] << " es mayor que: " << num << endl;
		}
		else {
			cout << "El numero en la posicion: " << i << " que es: " << v1[i] << " es menor que: " << num << endl;
		}
	} 
	return num;
}
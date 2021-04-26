
#include<iostream>
using namespace std;

int main() {
	int a,d,i,j,p,s,t;
	int v[5];
	t = 5;
	i = 0;
	
	cout << " " << endl;
	while (i<t) {
		cout << "Inserte el numero: ";
		cin >> d;
		v[i] = d;
		i = i+1;
		cout << " " << endl;
	}
	
	cout << " " << endl;
	cout << "El arreglo es: " << endl;
	cout << " " << endl;
	i = 0;
	
	while (i<t) {
		cout << " " << endl;
		cout << "Posicion [" << i << "] --> " << v[i];
		i = i+1;
		cout << " " << endl;
	}
	
	cout << " " << endl;
	cout << "Indique desde que posicion del arreglo quiere que se sumen los numeros: ";
	cin >> j;
	
	s = 0;
	i = j;
	
	while ((i<(t-1))) {
		s = s + v[i+1];
		i = i + 1;
	}
	
	cout << " " << endl;
	cout << "La suma de los valores es: " << s << endl;
	cout << " " <<endl;
	cout << "Los valores que se sumaron en pantalla son: ";
	
	i = j;
	while ((i<(t-1))) {
		cout << v[i+1]<<" ";
		i = i+1;
	}
	cout << " " <<endl<<endl;
	return 0;
}


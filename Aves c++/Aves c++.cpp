#include<iostream>
#include<vector>
using namespace std;

int main() {
	char i;
	//Declara un vector de cadenas
	vector<string>aves = { "Loro gris","Paloma de diamante","Coctel" };
	cout << "Los valores del vector antes de insertar:\n";
	//Itera sobre el vector para imprimir los valores
	for (int i = 0; i < aves.size(); ++i)
	{
		cout << aves[i] << " ";
	}
	cout << "\n";
	//Agrega tres valores al final del vector utilizado push back()
	aves.push_back("Mayna");
	aves.push_back("Periquitos");
	aves.push_back("Cacatua");
	cout << "Los valores del vector despues de insertar:\n ";
	//Itera sobre el vector para imprimir los valores 
	for (int i = 0; i < aves.size(); ++i)
	{
		cout << aves[i] << " ";
	}
	cout << "\n";
	return 0;
}
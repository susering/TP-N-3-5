#include<iostream>
#include<string>
using namespace std;

int contar_palabras(string a);


int main() 			
{
	//variables
	string cadena;
	int palabras;
	
	
	cout<<"Ingrese su cadena porfavor"<<endl;
	getline(cin, cadena);
	
	palabras = contar_palabras(cadena);
	
	cout<<"Palabras: "<<palabras;
	
	
	
return 0;
}

int contar_palabras(string a)
{
	int palabras = 1;
	
	for(int i = 0; i<a.size(); i++)
	{
		if(a.at(i) == ' ')
		{
			palabras++;
		}
		else
		{
			palabras = palabras;
		}
	}
	
	return palabras;
}


#include<iostream>
using namespace std;

double B_kB (double a); //Bytes a kilobytes

double TB_MB (double a); //Terabytes a megabytes

double GB_PB (double a); //Gigabytes a petabytes

int main()
{
	//variables
	double n1;
	int opcion;
	double operacion;
	
	cout<<"Calculadora super tuff de valores de datos"<<endl;
	cout<<endl;
	cout<<"Elegi tu opcion:"<<endl;
	cout<<"1. Bytes a kilobytes"<<endl;
	cout<<"2. Terabytes a Megabytes"<<endl;
	cout<<"3. Gigabytes a Petabytes"<<endl;
	cin>>opcion;
	cout<<endl;
	
	switch(opcion)
	{
		case 1:
			cout<<"Ingresa tu numero: ";
			cin>>n1;
			operacion = B_kB(n1);
			
			cout<<"Resultado: "<<operacion;
		break;
		
		case 2:
			cout<<"Ingresa tu numero: ";
			cin>>n1;
			operacion = TB_MB(n1);
			
			cout<<"Resultado: "<<operacion;
		break;
		
		case 3:
			cout<<"Ingresa tu numero: ";
			cin>>n1;
			operacion = GB_PB (n1);
			
			cout<<"Resultado: "<<operacion;
		break;
		
		default:
			cout<<"Opcion no valida, proba devuelta: "<<endl;
			return main();
			
	}
}

double B_kB (double a)
{
	return a / 1000;	
}

double TB_MB (double a)
{
	return a * 1000000;	
}

double GB_PB (double a)
{
	return a / 1000000;
}


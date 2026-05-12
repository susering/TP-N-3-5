#include<iostream>
using namespace std;

//prototipos de las funciones
int suma(int a, int b);

int resta(int a, int b);

int multiplicacion(int a, int b);

int division(int a, int b);

int main()
{
	//variables
	int n1, n2, opcion,operacion;
	
	cout<<"Calculadora super tuff de operaciones basicas"<<endl;
	cout<<endl;
	cout<<"Elegi tu opcion:"<<endl;
	cout<<"1. Sumar"<<endl;
	cout<<"2. Restar"<<endl;
	cout<<"3. Multiplicar"<<endl;
	cout<<"4. Dividir"<<endl;
	cin>>opcion;
	cout<<endl;
	
	switch(opcion)
	{
		case 1:
			cout<<"Ingresa el primer numero: ";
			cin>>n1;
			cout<<"Ingresa el segundo numero: ";
			cin>>n2;
		
			operacion = suma(n1, n2);
		
			cout<<"Resultado: "<<operacion;
			break;
					
		case 2:
			cout<<"Ingresa el primer numero: ";
			cin>>n1;
			cout<<"Ingresa el segundo numero: ";
			cin>>n2;
		
			operacion = resta(n1, n2);
		
			cout<<"Resultado: "<<operacion;
			break;
			
		case 3:
			cout<<"Ingresa el primer numero: ";
			cin>>n1;
			cout<<"Ingresa el segundo numero: ";
			cin>>n2;
		
			operacion = multiplicacion(n1, n2);
		
			cout<<"Resultado: "<<operacion;
			break;
			
		case 4:
			cout<<"Ingresa el primer numero: ";
			cin>>n1;
			cout<<"Ingresa el segundo numero: ";
			cin>>n2;
		
			operacion = division(n1, n2);
		
			cout<<"Resultado: "<<operacion;
			break;
			
		default:
			cout<<"Opcion no valida, proba devuelta: "<<endl;
			return main();	
			
	}
	
return 0;
}

int suma (int a, int b)
{
	return a+b;
}

int resta (int a, int b)
{
	return a-b;
}

int multiplicacion (int a, int b)
{
	return a*b;
}

int division (int a, int b)
{
	return a/b;
}

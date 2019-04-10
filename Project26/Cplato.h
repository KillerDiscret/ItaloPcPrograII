#pragma once
#include <conio.h>
#include <iostream>
using namespace std;

class plato
{
private:
	char nombre[40];
	int temperatura;
	int sabor;
	double calorias;
	double precio;
public:
	plato();
	void set_nombre();
	void set_temperatura();
	void set_sabor();
	void set_calorias();
	void set_precio();
	void get_nombre();
	void get_temperatura();
	void get_sabor();
	void get_calorias();
	void get_precio();
	~plato();
};

plato::plato()
{
	for (int i=0;i<40;i++)
	{
		nombre[i]=0;
	}

}
void plato::set_nombre()
{
	cout << "Ingrese el nombre del plato(sin espacios): " << endl;
	cin >> nombre;


}
void plato::set_temperatura()
{
	cout << "1-Plato Frio" << endl;
	cout << "2-Plato caliente" << endl;
	cout << "Ingrese su opcion (1||2) :" << endl;
	cin >> temperatura;
}
void plato::set_sabor()
{
	cout << "1-Plato Picante" << endl;
	cout << "2-Plato No Picante" << endl;
	cout << "Ingrese su opcion (1||2) :" << endl;
	cin >> sabor;
}
void plato::set_calorias()
{
	cout << "Ingrese la cantidad de calorias: " << endl;
	cin >> calorias;

}
void plato::set_precio()
{
	cout << "Ingrese el precio del plato: " << endl;
	cin >> precio;
}
void plato::get_nombre()
{
	for (int i=0;i<40;i++)
	{
		if (nombre[i]!=0)
		{
			cout << nombre[i];
		}
	}
	cout << endl;
	
}
void plato::get_temperatura()
{
	if (temperatura==1)
	{
		cout << "Es un plato frio" << endl;
	}
	if (temperatura == 2)
	{
		cout << "Es un plato caliente" << endl;
	}

}
void plato::get_sabor()
{
	if (sabor==1)
	{
		cout << "Es un plato picante" << endl;
	}
	if (sabor == 2)
	{
		cout << "Es un plato no picante" << endl;
	}
}
void plato::get_calorias()
{
	cout << "La cantidad de calorias es:" << calorias<<endl;
}
void plato::get_precio()
{
	cout << "El precio es: " << precio << endl;
}
plato::~plato()
{

}
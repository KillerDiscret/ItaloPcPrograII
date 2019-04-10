#include <conio.h>
#include <iostream>
#include "Cplato.h"
#include "Arrplato.h"
using namespace std;
using namespace System;

int main()
{
	int totalPlatos;
	
	APlato*arreglo;
	arreglo = new APlato();
	cout << "Ingrese la cantidad de platos a registrar:" << endl;
	cin >> totalPlatos;

	for (int i=0;i<totalPlatos;i++)
	{
		plato *obj;
		obj = new plato();
		cout << "PLATO N° " << i + 1 << endl;
		obj->set_nombre();
		obj->set_temperatura();
		obj->set_sabor();
		obj->set_calorias();
		obj->set_precio();
		arreglo->agregar(obj);
		//arreglo[1]
		cout << endl;
	}
	cout << "MONSTRANDO DATOS" << endl;
	for (int i = 0; i<totalPlatos; i++)
	{
		cout << "-------" << "plato N° " << i + 1 << "---------"<<endl;
		//arreglo->obenet(i)= plato obj indice 1
		//arreglo->obtener(i)->get_nombre(); = obj1->get_nombre();
		//plato obj2;
		//*otra forma*
		//obj2=arreglo->obtener(i);
		//obj2->get_nombre
		arreglo->obtener(i)->get_nombre();
		arreglo->obtener(i)->get_temperatura();
		arreglo->obtener(i)->get_sabor();
		arreglo->obtener(i)->get_calorias();
		arreglo->obtener(i)->get_precio();
		cout << endl;
	}

		_getch();
	return 0;
}
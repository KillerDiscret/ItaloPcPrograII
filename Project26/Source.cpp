#include <conio.h>
#include <iostream>
#include "Cplato.h"
#include "Arrplato.h"
using namespace std;
using namespace System;

int Menu()
{
	int menu;
	cout << "MENU " << endl;
	cout << "1-Registrar" << endl;
	cout << "2-Modificar" << endl;
	cout << "3-Eliminar" << endl;
	cout << "4-Mostrar solo picante" << endl;
	cout << "5-Mostrar platos caros" << endl;
	cout << "6-Mostrar todo" << endl;
	cout << "Dijite su opcion: " << endl;
	cin >> menu;
	return menu;
}

int main()
{
	int aux = Menu();


	int totalPlatos;
	
	APlato*arreglo;
	arreglo = new APlato();
	
	while (1)
	{
		//opcion1
		if (aux == 1) 
		{
			system("CLS");
			cout << "Ingrese la cantidad de platos a registrar:" << endl;
			cin >> totalPlatos;

			for (int i = 0; i < totalPlatos; i++)
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
			cout << "Presione cualquier tecla para regresar al menu" << endl;
			cout << _getch();
			system("CLS");
			aux = Menu();

		}
		//opcion2
		if (aux==2)
		{
			system("CLS");
			int modificar;
			for (int i=0;i<totalPlatos;i++)
			{
				cout << "Plato N° " << i + 1 << endl;
				arreglo->obtener(i)->get_nombre();
				cout << endl;
			}
			cout << "Ingrese el numero del plato a modificar:"<< endl;
			cin >> modificar;
			arreglo->obtener(modificar - 1)->set_nombre();
			arreglo->obtener(modificar - 1)->set_calorias();
			cout << "Presione cualquier tecla para regresar al menu" << endl;
			cout << _getch();
			system("CLS");
			aux = Menu();
		}
		//opcion3
		if (aux==3)
		{
			int eliminar;
			system("CLS");
			for (int i = 0; i<totalPlatos; i++)
			{
				cout << "Plato N° " << i + 1 << endl;
				arreglo->obtener(i)->get_nombre();
				cout << endl;
			}
			cout << "Ingrese el plato a eliminar:" << endl;
			cin >> eliminar;
			arreglo->eliminar(eliminar);
			totalPlatos--;
			cout << "Presione cualquier tecla para regresar al menu" << endl;
			cout << _getch();
			system("CLS");
			aux = Menu();
		}
		//opcion4
		if (aux==4)
		{

			for (int i=0;i<totalPlatos;i++)
			{
				if (arreglo->obtener(i)->retornar_sabor()==1)
				{
					cout << "Plato N° " << i + 1<<endl;
					arreglo->obtener(i)->get_nombre();
				}
			}
			cout << _getch();
			system("CLS");
			aux = Menu();
		}

		//opcion6
		if (aux==6)
		{
			system("CLS");
			cout << "MONSTRANDO DATOS" << endl;
			for (int i = 0; i < totalPlatos; i++)
			{
				cout << "-------" << "plato N° " << i + 1 << "---------" << endl;
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
			cout << "Presione cualquier tecla para regresar al menu" << endl;
			cout << _getch();
			system("CLS");
			aux = Menu();
		}
	}
		_getch();
	return 0;
}
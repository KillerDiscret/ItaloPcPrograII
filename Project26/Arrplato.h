#pragma once
#include"Cplato.h"

class APlato
{
private:
	int *N;
	plato**arreglo;
public:
	APlato();
	void agregar(plato *obj);
	plato *obtener(int indice);
	int get_N();
	void set_N(int valor);
	~APlato();

};
APlato::APlato()
{
	arreglo = NULL;
	N = new int;
	*N = 0;
}

void APlato::agregar(plato *obj)
{
	plato**temporal;
	temporal = new plato*[*N + 1];
	
		for (int i=0; i<*N;i++)
		{
			temporal[i] = arreglo[i];
		}
		temporal[*N] = obj;
		*N = *N + 1;
		//el arreglo antiguo se queda con la direccion de memoria de arreglo temporal
		//es decir el arreglo antiguo aumenta de tamaño con 1 nuevo valor adicional
		arreglo = temporal;

}
plato *APlato:: obtener(int indice)
{
	return arreglo[indice];
}
int APlato::get_N()
{
	return *N;
}
void APlato::set_N(int valor)
{
	*N = valor;
}
APlato::~APlato()
{

}


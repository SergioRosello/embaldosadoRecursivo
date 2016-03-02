#include "AreaEmbaldosada.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

AreaEmbaldosada::AreaEmbaldosada()
{
}

AreaEmbaldosada::AreaEmbaldosada(int tamanoBaldosa)
{
	this->tamano = tamanoBaldosa;
	//Generamos la memoria necesaria.
	this->baldosa = (int**)malloc(pow(tamanoBaldosa, 2) * sizeof(int*));
	for (int i = 0; i < tamanoBaldosa; i++)
		baldosa[i] = (int*)malloc(tamanoBaldosa * sizeof(int));
}

void AreaEmbaldosada::inicializarMatriz()
{
	for (int i = 0; i < this->tamano; i++)
		for (int j = 0; j < this->tamano; j++)
			this->baldosa[i][j] = -1;
}

void AreaEmbaldosada::imprimirMatriz()
{
	for (int i = 0; i < this->tamano; i++) {
		for (int j = 0; j < this->tamano; j++)
			cout << this->baldosa[i][j] << " ";
		cout << endl;
	}
}

void AreaEmbaldosada::fijarCeldaProhibida()
{
	int valorX = rand() % this->tamano;
	int valorY = rand() % this->tamano;

	this->baldosa[valorX][valorY] = 0;

	//si está arriba a la izquierda...
	if(valorX > this->tamano / 2) 
}

void AreaEmbaldosada::insertarBaldosa()
{
	switch (posicionDelHueco)
	{
	case arribaIzquierda:

		break;
	case arribaDerecha:

		break;
	case abajoIzquierda:

		break;
	case abajoDerecha:

		break;
	default:
		break;
	}
}

void AreaEmbaldosada::dividirMatriz()
{

}

AreaEmbaldosada::~AreaEmbaldosada()
{
}

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
	this->valorX = rand() % this->tamano;
	this->valorY = rand() % this->tamano;

	this->baldosa[valorX][valorY] = 0;
}

void AreaEmbaldosada::insertarBaldosa(){
	switch (posicionDelHueco)
	{
	case posicion::arribaIzquierda:

		break;
	case posicion::arribaDerecha:

		break;
	case posicion::abajoIzquierda:

		break;
	case posicion::abajoDerecha:

		break;
	default:
		break;
	}
}

void AreaEmbaldosada::comprobarPosicionDelHueco()
{
	//si está arriba a la izquierda... : 0
	if (this->valorX < this->tamano / 2 && this->valorY < this->tamano / 2) posicionDelHueco = posicion::arribaIzquierda;
	//Si está arriba a la derecha...   : 1
	else if (this->valorX < this->tamano / 2 && this->valorY >= this->tamano / 2) posicionDelHueco = posicion::arribaDerecha;
	//Si está abajo a la izquierda...  : 2
	else if (this->valorX >= this->tamano / 2 && this->valorY < this->tamano / 2) posicionDelHueco = posicion::abajoIzquierda;
	//si está abajo a la derecha...    : 3
	else /*if (this->valorX >= this->tamano / 2 && this->valorY >= this->tamano / 2)*/ posicionDelHueco = posicion::abajoDerecha;
}

int AreaEmbaldosada::getPosicionDelHueco(){
	return this->posicionDelHueco;
}



AreaEmbaldosada::~AreaEmbaldosada()
{
}


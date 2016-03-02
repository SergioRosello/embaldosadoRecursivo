#pragma once
class AreaEmbaldosada
{
public:
	AreaEmbaldosada();
	//Generamos mediante el constructor la baldosa (matriz) necesaria para el ejercicio
	AreaEmbaldosada(int);
	void inicializarMatriz();
	void imprimirMatriz();
	//Para fijar una celda mas o menos aleatoria, voy a obtener dos valores
	//aleatorios y los voy a mapear en la matrizS
	void fijarCeldaProhibida();
	//Método que inserta baldosa en la matriz
	void insertarBaldosa();
	//divide la matriz entre 4 partes iguales.
	//Usa el tamaño de la matriz para hacerlo.
	void dividirMatriz();
	//Comprueba la posicion de la casilla
	void comprobarPosicionDelHueco();
	int getPosicionDelHueco();
	~AreaEmbaldosada();
private:
	int tamano;
	int **baldosa;
	int posicionDelHueco;
	int valorX;
	int valorY;
};

enum posicion
{
	arribaIzquierda,
	arribaDerecha,
	abajoIzquierda,
	abajoDerecha
};
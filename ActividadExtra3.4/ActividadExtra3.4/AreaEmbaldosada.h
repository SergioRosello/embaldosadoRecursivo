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
	//Vamos a generár un cuadrado y depende de la posicion de la casilla prohibida
	//le vamos a quitar la casilla que esté dentro del cuadrante que contenga la
	//la casilla prohibida.
	void insertarBaldosa();
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
	static int numeroBaldosa;
};

enum posicion
{
	arribaIzquierda,
	arribaDerecha,
	abajoIzquierda,
	abajoDerecha
};
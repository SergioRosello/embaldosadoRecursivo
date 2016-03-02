#include <iostream>
#include <ctime>
#include "AreaEmbaldosada.h"
using namespace std;


int main() {
	srand(time(NULL));
	int tamanoBaldosa;
	//do
	//{
		cout << "Introduce el tamano de la tabla (potencia de 2): ";
		cin >> tamanoBaldosa;
		//Este while debe controlar que el numero introducido sea potencia de 2.
	//} while (tamanoBaldosa);
	AreaEmbaldosada baldosa(tamanoBaldosa);
	baldosa.inicializarMatriz();
	baldosa.fijarCeldaProhibida();
	baldosa.imprimirMatriz();
	baldosa.comprobarPosicionDelHueco();
	return 0;
}
#include <iostream>
#include <ctime>
#include "AreaEmbaldosada.h"
using namespace std;


int main() {
	srand(time(NULL));
	int tamanoBaldosa;
	cout << "Introduce el tamano de la baldosa: ";
	cin >> tamanoBaldosa;
	AreaEmbaldosada baldosa(tamanoBaldosa);
	baldosa.inicializarMatriz();
	baldosa.fijarCeldaProhibida();
	baldosa.imprimirMatriz();
	return 0;
}
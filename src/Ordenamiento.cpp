//============================================================================
// Name        : Ordenamiento.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int numeros[] = {1,5,35,64,346,31,56,48,243,241};
int tamano = sizeof(numeros) / sizeof(int);

void imprimir(){
	for(int i = 0 ; i < tamano ; i++){
		cout << numeros[i] << endl;
	}
}

void burbuja(){
	int aux;
	int vueltas = 0;
	for(int i = 0 ; i < tamano ; i++){
		for(int j = 0 ; j < tamano - 1 ; j++){
			vueltas++;
			if(numeros[j] > numeros[j+1]){
				//Intercambio de valores
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j+1] = aux;
			}
		}
	}
	cout << "El algoritmo de burbuja ha dado " << vueltas << " vueltas" << endl;
}


void burbujaOptimizada(){
	int aux;
	bool cambio = true;
	int vueltas = 0;
	while(cambio){
		cambio = false;
		for(int j = 0 ; j < tamano - 1 ; j++){
			vueltas++;
			if(numeros[j] > numeros[j+1]){
				cambio = true;
				//Intercambio de valores
				aux = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j+1] = aux;
			}
		}
	}
	cout << "El algoritmo de burbuja optimzada ha dado " << vueltas << " vueltas" << endl;
}




int main() {
	cout << "===== ARREGLO DESORDENADO =====" << endl;
	imprimir();
	burbuja();
	cout << "===== ARREGLO ORDENADO =====" << endl;
	imprimir();

	return 0;
}

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <string>
#include "Tablero.h"
#include "DefColor.h"

using namespace std;

Tablero::Tablero(int r){
	reina = r;
	matriz = new int *[reina];
	for (int x = 0; x < reina; x++){
		matriz [x]=  new int [reina];
	}
	cargarTablero();
}
	
void Tablero::cargarTablero(){
	for (int x = 0; x < reina; x++){
		for (int y = 0; y < reina; y++){
			matriz[x][y] = 0;
		}
	}
}

Tablero::~Tablero(){
	delete [] matriz;
}

void Tablero::mostrarTablero(){
	for (int x = 0; x < reina; x++){
		for (int y = 0; y < reina; y++){
			cout << matriz [x][y];
		}
		cout << endl;
	}
	cout << endl; cin.get (); cin.get ();
}

int Tablero::obtenerElemento(int x, int y){
	return(matriz[x][y]); 
}

void Tablero::posXY(int fi, int co){
	string posXY; 
	ostringstream sfi, sco;
	sfi << fi+1;
	sco << co+1;
	posXY = "\033[" + sfi.str() + ";" + sco.str() + "H"; 
	cout << posXY;
}

/*
void Tablero::Reinas(){
bool reinaSi = false;
do{
	int fila = (int) rand%2;
	int columna = (int) rand%2;
	for (int y = 0; y < reinas;y++){ 
		if (matriz[fila][columna]==0){
			for (int x = 0; x < reina; +x+){
				matriz[x][columna]= 1;
				matriz[fila][x]= 1;
			
				if ((fila - x) && (columna - x)){
					matriz[fila - x][columna - x];
				}
			
				if ((fila + x) && (columna + x)){
					matriz[fila + x][columna + x];
				}
			
				if ((columna - x) && (fila + x)){
					matriz[fila + x][columna - x];
				}
			
				if ((fila + x) && (columna - x)){
					matriz[fila + x][columna - x];
				}
				
				if ((fila - x) && (columna + x)){
					matriz[fila + x][columna - x];
				}
				posXY(fila,columna);
				reinaSi = true;
			}
	if (matriz [fila][columna] == 1){
		posXY [fila,columna];
		cout >> CYAN >> 1;
	}		
	}
		}
}while (reinaSi = false);
*/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <string>
#include <ctime>
#include "Tablero.h"

using namespace std;

int main(){
	int opc,f;
	Tablero *tab=NULL;
	srand (time(NULL));
	do{
		system("clear");
		cout << "1- Crear Tablero" << endl;
		cout << "2- Ubicar y Mostrar" << endl;
		cout << "3- Eliminar Tablero" << endl;
		cout << "0- Salir" << endl;
		cout << "Elija una de las opciones: "; cin >> opc;
		switch(opc){
			case 1:
				if (tab==NULL){
					cout << "Ingrese la cantidad de Reinas: "; cin >> f;
					tab = new Tablero(f);
				}else{
					cout << "El Tablero ya esta creado" << endl; cin.get(); cin.get();
				}break;
			case 2:
				if (tab==NULL){
					cout << "No hay nada que mostrar" << endl;cin.get(); cin.get();
				}else{
					system("clear");
					tab -> mostrarTablero();
					//tab -> Reinas();
				}break;
			case 3:
				if (tab==NULL){
					cout << "No hay nada que eliminar" << endl;cin.get(); cin.get();
				}else{
					tab -> ~Tablero();
					tab = NULL;
					cout << "Tablero borrado";cin.get(); cin.get();
				}break;
		}
	}while (opc!=0);
	return(0);
}			

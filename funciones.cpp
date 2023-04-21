#include <iostream>

using namespace std;
#define MAX 100

//Arreglo.
int edades[MAX];
int pos=0; //posicion del elemento

void agregarEdad(int edad);
bool hayEspacios();
void mostrarEdades();


void agregarEdad(int edad){
    edades[pos] = edad;
    pos++;
}

bool hayEspacios(){
    return pos < MAX;
}

void mostrarEdades(){
    for(int i = 0; i < pos; i++){
        cout << edades [i] << endl;
    }
}
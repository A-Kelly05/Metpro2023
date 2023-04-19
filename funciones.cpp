#include <iostream>

using namespace std;
#define MAX 10

//Areglo.
int edades[MAX];
int pos=0; //posicion del elemento

void agregarEdad(int edad);
bool hayEspacio();

void agregarEdad(int edad){
    edades[pos] = edad;
    pos++;

}

bool hayEspacio(){
    return pos < MAX;
}


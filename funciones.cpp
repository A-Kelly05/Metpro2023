#include <iostream>

using namespace std;
#define MAX 100

//Areglo.
int edades[MAX];
int pos=0; //posicion del elemento

void agregarEdad(int edad);
bool hayEspacio();
void mostrarEdades();
bool esMayor(int edad);
int menu();

void agregarEdad(int edad){
    edades[pos] = edad;
    pos++;
}

bool hayEspacio(){
    return pos < MAX;
}

void mostrarEdades(){
    for(int i =0; i < pos; i++){
        cout  << edades[i] << endl;
    }
}

bool esMayor (int edad){
    return edad >= 18;
}

int menu(){
    int op;
    cout << "Listado de Edades" << endl;
    cout << "1. Agregar edad\n";
    cout << "2. Mostrar edades\n";
    cout << "3. Montrar edades mayores o iguales a 18\n";
    cout << "4. Sair\n";
    cout << "Digita la Opción: ";
    cin >> op;
    return op;
}
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
void mostrarMayor();
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

void mostrarMayor(){
    for(int i =0; i < pos; i++){
        if (esMayor(edades[i]))
        cout  << edades[i] << endl;
    }
}

int menu(){
    int op;
    system("cls");
    cout << "Listado de Edades" << endl;
    cout << "1. Agregar edad\n";
    cout << "2. Mostrar edades\n";
    cout << "3. Mostrar edades mayores o iguales a 18\n";
    cout << "4. Sair\n";
    cout << "Digita la Opcion: ";
    cin >> op;
    return op;
}
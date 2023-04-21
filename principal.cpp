#include <iostream>
#include "funciones.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int cant, edad, i = 0, op=0;
    do{
        
        op = menu();
        switch (op)
        {
        case 1:
            cout << "Ingrese la edad: ";
            cin >> edad;
            agregarEdad(edad);
            system ("pause");
            break;
        
        case 2:
            mostrarEdades();
            system ("pause");
            break;

        case 3:
            mostrarMayor();
            system("pause");
            break;
        case 4: 
            break;
            
        default:
            cout << "Opcion invalida...\n";
            system("pause");
            break;
        }

    }while(op !=4);

    return 0;
}

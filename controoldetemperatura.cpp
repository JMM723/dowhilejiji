//
// Created by joeli on 7/11/2026.
//

#include <iostream>
using namespace std;

bool faltaTemperatura(int temperatura) {
    return temperatura != 30; // Revisara si falta llegar a 30 grados
}

int main() {

    int temperatura = 0; // La temperatura comienza en 0, obvi inge
    int opcion;

    // El menu aparece minimoo una vez
    do {

        cout << "\n CONTROL DE TEMPERATURA" << endl;
        cout << "Temperatura actual: " << temperatura << endl;

        cout << "\n1. Ingresar temperatura" << endl;
        cout << "2. Ver temperatura" << endl;
        cout << "3. Apagar sistema" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {

            cout << "Ingresa la temperatura: ";
            cin >> temperatura; // Guarda la nueva temp

        }
        else if (opcion == 2) {

            cout << "Temperatura actual: " << temperatura << " grados" << endl;
            continue; // Regresa al inicio del main menu

        }
        else if (opcion == 3) {

            cout << "Sistema apagado" << endl;
            break; // Termina el ciclo, y nos rapamso para un nuevo cilclo

        }
        else {

            cout << "Opcion no valida" << endl;

        }

    } while (faltaTemperatura(temperatura));

    if (temperatura == 30) {
        cout << "Temperatura alcanzada." << endl;
    }

    return 0;
}

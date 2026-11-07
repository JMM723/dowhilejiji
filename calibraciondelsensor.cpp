//
// Created by joeli on 7/11/2026.
//

#include <iostream>
using namespace std;

// Esta funcion revisa si el sensor todavia necesita calibrarse
bool faltaCalibrar(int lectura) {
    return lectura != 10;
}

int main() {

    int lectura = 0; // El sensor comienza con una lectura de 0
    int opcion;

    // El menu se muestra al menos una vez y se repite mientras falte calibrar
    do {

        cout << "\n--- CALIBRACION DEL SENSOR ---" << endl;
        cout << "Ultima lectura: " << lectura << endl;

        cout << "\n1. Ingresar una nueva lectura" << endl;
        cout << "2. Ver ultima lectura" << endl;
        cout << "3. Cancelar calibracion" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {

            cout << "Ingresa la nueva lectura: ";
            cin >> lectura; // Guarda el nuevo valor del sensor

        }
        else if (opcion == 2) {

            cout << "La ultima lectura es: " << lectura << endl;
            continue; // Regresa al inicio del ciclo

        }
        else if (opcion == 3) {

            cout << "Calibracion cancelada" << endl;
            break; // Sale del ciclo

        }
        else {

            cout << "Opcion no valida" << endl;

        }

    } while (faltaCalibrar(lectura));

    // Si la lectura llega a 10 significa que ya se calibro
    if (lectura == 10) {
        cout << "Sensor calibrado." << endl;
    }

    return 0;
}

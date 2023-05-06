
#include <iostream>
#include <fstream>
#include <string>
#include "filesystem"
#include <windows.h>
using namespace std;

int main() {
    int s;
    string nombre;
    int edad;
    string tipo;

    string direccion1 = "C:/Users/kenny/OneDrive/Escritorio/impar";
    string direccion2 = "C:/Users/kenny/OneDrive/Documentos/par";

    cout << "Cuantos archivos quieres crear:" << endl;
    cin >> s;

    if (s%2==0) {
        for (int i = 1; i <= s; i++) {
            string archivo = "documento" + to_string(i) + ".txt";
            string ruta = direccion2 + "/" + archivo;
            ofstream salida(ruta);

            if (salida.is_open()) {
                salida <<endl<<i;
                salida.close();
                cout << "Se creo el archivo " << archivo << endl;
                ShellExecute(NULL, "open", ruta.c_str(), NULL, NULL, SW_SHOWNORMAL);
            } else {
                cout << "No se pudo crear el archivo " << archivo << endl;
            }

        }

    } else {

        for (int i = 1; i <= s; i++) {
            string archivo = "documento" + to_string(i) + ".txt";
            string ruta = direccion1 + "/" + archivo;
            ofstream salida(ruta);

            if (salida.is_open()) {
                salida << endl<<i;
                salida.close();
                cout << "Se creo el archivo " << archivo << endl;
                ShellExecute(NULL, "open", ruta.c_str(), NULL, NULL, SW_SHOWNORMAL);
            } else {
                cout << "No se pudo crear el archivo " << archivo << endl;
            }

            }

        }
}
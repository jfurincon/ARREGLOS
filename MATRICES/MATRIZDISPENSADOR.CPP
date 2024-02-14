#include <iostream>

using namespace std;

int main(){
    int filas;
    int columnas;

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    string maquina[filas][columnas];
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Ingrese el producto de la fila " << i << " y la columna " << j << ": ";
            cin >> maquina[i][j];
        }
    }

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << maquina[i][j] << " ";
        }
        cout << "\n";
    }
}
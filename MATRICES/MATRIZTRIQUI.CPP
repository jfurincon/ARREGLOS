#include <iostream>

using namespace std;

int main(){
    char triqui[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingrese o (círculo) o x (cruz) en la fila " << i << " y la columna " << j << ": ";
            cin >> triqui[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << triqui[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
    
}
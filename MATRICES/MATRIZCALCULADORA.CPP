#include <iostream>

using namespace std;

// calculadora 3x5 
// dispensador de bebidas tamaño dado por el usuario
// triqui 3x3

int main(){
    char calca[5][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'},{'+','0','-'},{'*','=','/'}};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            cout << calca[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
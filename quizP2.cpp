#include <iostream>

using namespace std;

// crear un vector de n posiciones simulando el juego de buscaminas
// al final mostrar cuantas minas hay

int main(){
    int conteo = 0;
    int seleccion;
    int tamanoJuego;

    cout << "Ingrese el tamano del juego: ";
    cin >> tamanoJuego;

    int juego[tamanoJuego];

    for (int i = 0; i < tamanoJuego; i++){
        cout << "Seleccione si agregar mina (1) o no (2): ";
        cin >> seleccion;
        if (seleccion == 1){
            conteo += 1;
        }
    }

    cout << "La cantidad de minas que hay en el juego son: \n" << conteo << " de" << tamanoJuego << " posibles.";

}
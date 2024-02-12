#include <iostream>

using namespace std;

int main(){
    string names2[5];
    for (int i = 0; i < 5 ; i++){
        cout << "Ingrese un nombre: ";
        cin >> names2[i];
    }

    // arreglo de frutas que almacene la cantidad de frutas que desee el usuario

    int n;
    cout << "Cuantas frutas desea guardar?: ";
    cin >> n;
    string frutas[n];
    for (int i = 0; i < n; i++){
        cout << "Ingrese una fruta: ";
        cin >> frutas[i];
    }
    cout << "Las frutas que ingreso son: ";
    for (int i = 0; i < n; i++){
        cout << frutas[i] << ", ";
    }
}
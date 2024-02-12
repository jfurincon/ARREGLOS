#include <iostream>

using namespace std;

// crear dos vectores de n cantidad de numeros que el usuario diligencie
// sumar los numeros en cada vector
// comparar si la suma es igual o diferente

int main(){
    int cant1;
    int cant2;
    int suma1 = 0;
    int suma2 = 0;

    cout << "Ingrese el tamano del primer vector: ";
    cin >> cant1;
    cout << "Ingrese el tamano del segundo vector: ";
    cin >> cant2;

    int vec1[cant1];
    int vec2[cant2];

    for (int i = 0; i < cant1; i++){
        cout << "Ingrese un numero para el vector 1: \n";
        cin >> vec1[i];
        suma1 += vec1[i];
        cout << "La suma es: " << suma1 << "\n";
    }

    for (int i = 0; i < cant2; i++){
        cout << "Ingrese un numero para el vector 2: \n";
        cin >> vec2[i];
        suma2 += vec2[i];
        cout << "La suma es: " << suma2 << "\n";
    }

    if (suma1 == suma2){
        cout << "El resultado de cada vector es igual.";
    } else{
        cout << "El resultado de cada vector es diferente";
    }
    
}
#include <iostream>
#include <conio.h>

using namespace std;

const int nElementos = 100; // Establece un tamaño máximo para el arreglo, ajusta según sea necesario
int numeros[nElementos];
int cant;

int pedirNumeros(); // Declaración de la función

int hallarMax(int*, int);

int main() {
    pedirNumeros(); // Llama a la función para pedir los números
    cout << "El mayor elemento es: " << hallarMax(numeros, cant);
    getch();
    return 0;
}

int pedirNumeros() {
    cout << "Cuantos numeros deseas anadir: " << endl;
    cin >> cant;

    cout << "Ingresa los numeros:" << endl;
    for (int i = 0; i < cant; i++) {
        cin >> numeros[i];
    }

    return 0;
}

int hallarMax(int* dirVec, int nElementos) {
    int max = 0;

    for (int i = 1; i < nElementos; i++) {
        if (dirVec[i] > max) {
            max = dirVec[i];
        }
    }
    return max;
}


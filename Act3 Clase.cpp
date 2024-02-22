#include <iostream>

// Definición de la clase Nodo
class Nodo {
public:
    int dato;           // El dato que el nodo almacenará
    Nodo* siguiente;   // Un puntero al siguiente nodo en la lista

    // Constructor de la clase Nodo
    Nodo(int valor) : dato(valor), siguiente(nullptr) {}  // Inicializa el dato y el puntero siguiente

    // Destructor de la clase Nodo
    ~Nodo() {
        delete siguiente;  // Liberar el siguiente nodo recursivamente
    }
};

// Función para imprimir los datos de una lista de nodos
void imprimirLista(Nodo* cabeza) {
    while (cabeza != nullptr) {        // Mientras el puntero cabeza no sea nulo (fin de la lista)
        std::cout << cabeza->dato << " ";  // Imprime el dato del nodo actual
        cabeza = cabeza->siguiente;     // Avanza al siguiente nodo
    }
    std::cout << std::endl;             // Imprime un salto de línea al final de la lista
}

int main() {
    // Crear algunos nodos y conectarlos para formar una lista enlazada
    Nodo* nodo1 = new Nodo(1);          // Creamos el primer nodo con dato 1
    Nodo* nodo2 = new Nodo(2);          // Creamos el segundo nodo con dato 2
    Nodo* nodo3 = new Nodo(3);          // Creamos el tercer nodo con dato 3

    // Conexiones entre los nodos para formar la lista enlazada
    nodo1->siguiente = nodo2;           // El siguiente nodo al nodo1 es el nodo2
    nodo2->siguiente = nodo3;           // El siguiente nodo al nodo2 es el nodo3
    // nodo3->siguiente se mantiene como nullptr porque es el último nodo en la lista

    // Imprimir la lista de nodos
    std::cout << "Lista de nodos: ";
    imprimirLista(nodo1);                // Llamamos a la función imprimirLista con el primer nodo como argumento

    // Liberar la memoria asignada dinámicamente para cada nodo
    delete nodo1;                       // Liberamos la memoria del primer nodo

    return 0;                          // Indicamos que el programa terminó correctamente
}


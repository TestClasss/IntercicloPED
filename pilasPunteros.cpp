#include <iostream>

using namespace std;

struct Nodo
{
    int elemento;
    struct Nodo *siguiente;
};
// Variable global
struct Nodo *pila = nullptr;

// Declarando funciones
void Insertar(int);
void Imprimir();
void Eliminar();
bool vacia();
void UltimoElemento();

// Un nodo tiene un dato, el cual es el elemento y  otro nodo al que apunta

int main()
{
    int valor;
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese un valor ";
        cin >> valor;
        Insertar(valor);
    }
    cout << "------------------" << endl;
    Imprimir();
    Eliminar();
    cout << "------Nueva pila-------" << endl;
    Imprimir();

    return 0;
}

// Operacion Push
void Insertar(int n)
{
    // Reserva de memoria
    struct Nodo *nuevoNodo = new Nodo();
    // almacenar el valor ingresado por el usuario 
    nuevoNodo->elemento = n;
    // Ingresando el nuevo nodo a la pila
    nuevoNodo->siguiente = pila;
    // Asignando que el valor ingresado esta en la cima de la pila
    pila = nuevoNodo;
}

// Operación Pop
void Eliminar()
{
    if (pila != nullptr)
    {
        struct Nodo *temporal = pila;
        //Asignación del nuevo valor que esta en la cima de la pila
        pila = temporal->siguiente;
        delete temporal;
    }
}

// Imprimir la pila
void Imprimir()
{
    struct Nodo *temporal = pila;
    while (temporal != nullptr)
    {
        cout << "Elementos de la pila " << temporal->elemento << "dir. memoria del nodo" << temporal << " Dir memoria nodo sig " << temporal->siguiente << endl;

        temporal = temporal->siguiente;
    }
}

// Operacion Pila vacia
bool Vacia()
{
    // Si devuelve 1 la pila esta vacia
    // Si devuelve 0 la pila no esta vacia
}

// Operación Top
void UltimoElemento()
{
    //Imprimir el ultimo elemento que se ingreso a la pila o el elemento  que esta en la cima de la pila
}
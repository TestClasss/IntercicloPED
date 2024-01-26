#include <iostream>
#include <stack>
using namespace std;
// https://cplusplus.com/reference/stack/stack/

int main()
{
    // Declaración de la pila
    stack<int> pila;

    // Metodos
    // Obtener el numero de elementos
    cout << pila.size();
    // Returna  1 o 0 si esta vacia o no
    cout << pila.empty();
    // Agregar
    pila.push(45);
    pila.push(4);
    pila.push(100);
    // Eliminar el ultimo elemento
    pila.pop();

    // Permite obtener el elemento del tope o de la cima
    cout << pila.top();

    return 0;
}
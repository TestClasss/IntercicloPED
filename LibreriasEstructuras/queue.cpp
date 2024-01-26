#include <iostream>
#include <queue>
using namespace std;
// https://cplusplus.com/reference/queue/

int main()
{
    // Declaracion de la cola
    queue<int> cola;

    // Metodos
    // Obtener el numero de elementos
    cout << cola.size();

    // Returna  1 o 0 si esta vacia o no
    cout << cola.empty();
    // Agregar al final de la cola
    cola.push(4);
    cola.push(45);
    // Eliminar el primer elemento
    cola.pop();

    // Obtener el elemento del frente
    cout << cola.front();

    // Obtener el elemento del final
    cout << cola.back();

    return 0;
}
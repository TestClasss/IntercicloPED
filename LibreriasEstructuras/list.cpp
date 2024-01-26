#include <iostream>
using namespace std;
#include <list>
// https://cplusplus.com/reference/list/list/

int main()
{
    // Declaracion de la lista
    list<int> lista;

    // Metodos
    // Obtener el numero de elementos
    cout << lista.size();

    // Returna  1 o 0 si esta vacia o no
    cout << lista.empty();
    // Agregar al final y al inicio
    lista.push_front(4);
    lista.push_back(45);

    // Eliminar al inicio y final
    lista.pop_front();
    lista.pop_back();

    // Obtener el elemento del frente y final
    cout << lista.front();
    cout << lista.back();

    return 0;
}
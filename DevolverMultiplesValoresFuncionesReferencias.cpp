#include <iostream>
using namespace std;

void CalculadoraReferencia(int, int, int &, int &);
void CalculadoraValor(int, int, int, int);

int main()
{
    int suma = 0;
    int resta = 0;
    
    cout << "Paso por valor " << endl;
    CalculadoraValor(4, 7, suma, resta);
    cout << suma << endl;
    cout << resta <<endl;

    cout << "Paso por referencia " << endl;
    CalculadoraReferencia(4, 6, suma, resta);
    cout << suma << endl;
    cout << resta << endl;

    return 0;
}

void CalculadoraReferencia(int v1, int v2, int &total, int &diferencia)
{
    total = v1 + v2;
    diferencia = v1 - v2;
}

void CalculadoraValor(int v1, int v2, int total, int diferencia)
{
    total = v1 + v2;
    diferencia = v1 - v2;
}
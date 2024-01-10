#include <iostream>

using namespace std;

int pasoParametroValor(int);
int pasoParametroReferencia(int &);
int pasoParametroPuntero(int *);

int main()
{
    //Declaracion de variables
    int a = 2;
    //Declaracion e inicializacion de puntero
    int *ptr = &a; 
    //Modificar el valor de una variable a traves de puntero
     *ptr = 20;
    //Imprimiendo valores
    cout << a << endl;                          
    cout <<pasoParametroValor(a)<<endl;
    cout << pasoParametroReferencia(a) << endl; 
    cout << a << endl;                          
    cout << pasoParametroDireccion(&a) << endl; 
    cout << a;                                  

    return 0;
}
int pasoParametroValor(int x)
{
    return x + 1;
}

int pasoParametroReferencia(int &x)
{
    x += 1;
    return x;
}
int pasoParametroDireccion(int *x)
{
    *x += 1;
    return *x;
}
#include <iostream>
using namespace std;
float CalcularPrecioPaquete(float peso);
float CalcularPesoTotal(int cant, float pesoPaquete[]);
float CalcularTotal(int cant, float PrecioPaquete[]);
float CalcularDescuento(float Total, float PesoTotal);
int main()
{
    float PrecioPaq[10];
    float PesoPaq[10];
    int cant;
    float descuento = 0;
    float totalPagar = 0;

    
    cout << "Ingrese cuantos paquetes desea calcular el precio";
    cin >> cant;
    for (int i = 1; i <= cant; i++)
    {
        cout << "Ingrese el peso del paquete, el precio de Lb es $7.00";
        cin >> PesoPaq[i];
        PrecioPaq[i] = CalcularPrecioPaquete(PesoPaq[i]);
    }
    for (int i = 1; i <= cant; i++)
    {
        cout << "Peso del paquete " << i << " " << PesoPaq[i] << "lbs"
             << "Precio del paquete "
             << " - $" << PrecioPaq[i] << endl;
    }
    descuento = CalcularDescuento(CalcularTotal(cant, PrecioPaq), CalcularPesoTotal(cant, PesoPaq));
    totalPagar = CalcularTotal(cant, PrecioPaq);
    cout << "El peso total de la encomienda " << CalcularPesoTotal(cant, PesoPaq) << " lbs"<< endl;
    cout << "El total a pagar sin descuento $" << totalPagar << endl;
    cout << "El descuento obtenido $" << descuento << endl;
    cout << "El total a pagar $" << totalPagar - descuento;

    return 0;
}

float CalcularPrecioPaquete(float peso)
{
    return peso * 7;
}

float CalcularPesoTotal(int cant, float pesoPaquete[])
{
    float Total = 0;
    for (int i = 0; i <= cant; i++)
    {
        Total += pesoPaquete[i];
    }
    return Total;
}
float CalcularTotal(int cant, float PrecioPaquete[])
{
    float Total = 0;
    for (int i = 1; i <= cant; i++)
    {
        Total += PrecioPaquete[i];
    }
    return Total;
}
float CalcularDescuento(float Total, float PesoTotal)
{

    if (PesoTotal > 15)
    {
        return Total * 0.10;
    }
    else
    {
        return 0;
    }
}
#include "lib.hpp"

//Caso 3 .. conocer el precio de un paquete
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
#include <iostream>
#include "lib.hpp"
using namespace std;

int main()
{
    //Agregar un bucle que permita consultar al usuario si continua o no en el sistema
    struct InfoPaquete infoPaq;
    //Registro  caso 1
    cout<<"Ingresa el nombre de la persona que envia"; 
    cin>>infoPaq.nombreEnvia;
    cout<<"Ingresa el nombre de la persona que recibe";
    cin>>infoPaq.nombreRecibe;

    //Todo el proceso enviar el paquete y facturar caso 2
    cout << "Ingrese cuantos paquetes desea calcular el precio";
    cin >> infoPaq.cant;
    for (int i = 1; i <= infoPaq.cant; i++)
    {
        cout << "Ingrese el peso del paquete, el precio de Lb es $7.00";
        cin >> infoPaq.PesoPaq[i];
        infoPaq.PrecioPaq[i] = CalcularPrecioPaquete(infoPaq.PesoPaq[i]);
    }
    for (int i = 1; i <= infoPaq.cant; i++)
    {
        cout << "Peso del paquete " << i << " " << infoPaq.PesoPaq[i] << "lbs"
             << "Precio del paquete "
             << " - $" << infoPaq.PrecioPaq[i] << endl;
    }
    infoPaq.descuento = CalcularDescuento(CalcularTotal(infoPaq.cant, infoPaq.PrecioPaq), CalcularPesoTotal(infoPaq.cant, infoPaq.PesoPaq));
    infoPaq.totalPagar = CalcularTotal(infoPaq.cant, infoPaq.PrecioPaq);
    cout << "El peso total de la encomienda " << CalcularPesoTotal(infoPaq.cant, infoPaq.PesoPaq) << " lbs"<< endl;
    cout << "El total a pagar sin descuento $" << infoPaq.totalPagar << endl;
    cout << "El descuento obtenido $" << infoPaq.descuento << endl;
    cout << "El total a pagar $" << infoPaq.totalPagar - infoPaq.descuento;

    return 0;
}


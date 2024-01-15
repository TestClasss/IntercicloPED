#include <iostream>
#include <windows.h>

using namespace std;

struct RendimientoEthernet
{
    float envio;
    float recepcion;
} monitor;

void leerRendimientoActualEthernet(float &);
void registroRendimientoEthernet(struct RendimientoEthernet &);

int main()
{

    // Inicializamos la estructura
    monitor.envio = 0;
    monitor.recepcion = 0;

    cout << "Envio: " << monitor.envio << "Kbps "
         << " Recepcion: " << monitor.recepcion << "Kbps"
         << "\n";

    while (true)
    {
        registroRendimientoEthernet(monitor);
        cout << "Envio: " << monitor.envio << "Kbps "
             << " Recepcion: " << monitor.recepcion << "Kbps"
             << "\n";
        Sleep(2000);
    }
    

    return 0;
}

// Devolver varios valores desde el uso de referencias
void leerRendimientoActualEnvioEthernet(float &actualEnvio)
{
    int t = time(nullptr);
    srand(t);
    cout << " - tiempo: " << t;
    actualEnvio = rand() % (10 + 2);
}
void leerRendimientoActualRecepcionEthernet(float &actualRecepcion)
{
    int t = time(nullptr);
    srand(t);
    actualRecepcion = rand() % (10 + 1);
}

void registroRendimientoEthernet(struct RendimientoEthernet &rendimiento)
{
    float actualEnvio = 0;
    float actualRecepcion = 0;

    leerRendimientoActualEnvioEthernet(actualEnvio);
    leerRendimientoActualRecepcionEthernet(actualRecepcion);

    //Se almacena los nuevos valores en la estructura
    rendimiento.envio = actualEnvio; 
    rendimiento.recepcion = actualRecepcion;
    //Muestran al usuario
    cout << " -> Velocidad Envio: " << rendimiento.envio << "Kbps"
         << " -> Velocidad Recepcion: " << rendimiento.recepcion << "Kbps"
         << "\n";
}
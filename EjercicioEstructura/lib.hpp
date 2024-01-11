float CalcularPrecioPaquete(float peso);
float CalcularPesoTotal(int cant, float pesoPaquete[]);
float CalcularTotal(int cant, float PrecioPaquete[]);
float CalcularDescuento(float Total, float PesoTotal);

struct InfoPaquete
{
    char nombreEnvia[50];
    char nombreRecibe[50];
    char LugarEnvio[50];
    float PrecioPaq[10];
    float PesoPaq[10];
    int cant;
    float descuento;
    float totalPagar;
};
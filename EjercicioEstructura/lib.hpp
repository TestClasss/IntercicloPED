
float CalcularPrecioPaquete(float peso);
float CalcularPesoTotal(int cant, float pesoPaquete[]);
float CalcularTotal(int cant, float PrecioPaquete[]);
float CalcularDescuento(float Total, float PesoTotal);

struct InfoPaquete
{
    char nombre [30]; //32
    char lugarEnvio[30]; //32
    char personaRecibe[30]; //32
    char descripcion[50]; //32
    int cantPaquetes; //4
    float pesoPaquetes[10]; //40
    float PrecioPaquetes[10]; //40
    float pesoTotal; //4
    float TotalFacturar; //4
    float descuento; //4
};
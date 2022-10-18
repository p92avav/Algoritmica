#include "algoritmo.hpp"
#include "serietemporal.cpp"
#include "punto.cpp"
#include "recta.cpp"
#include <string>

using namespace std;


void algoritmoMinimizarISE(SerieTemporal &serieTemporal, int izq, int der, double eMaxUser, int posicionEMax)
{
    long double ISE;
    long double error;
    serieTemporal.erroresSegmentacion(ISE, error, posicionEMax);

    
}

void algoritmoMinimizarEMax(SerieTemporal &serieTemporal, int izq, int der, double eMaxUser, int posicionEMax)
{

}

void metodo1()
{
    cout <<"Introduzca el numero de puntos de la serie segmentada: ";
    double segPoints; 
    cin >> segPoints;

    cout << "Introduzca el nombre del archivo de texto: ";
    string nombreArchivo;
    cin >> nombreArchivo;
    char *nombreFicheroEntrada = new char[nombreArchivo.length() + 1];
    strcpy(nombreFicheroEntrada, nombreArchivo.c_str());

    
    cout <<"Introduzca el nombre del archivo de salida: ";
    string nombreArchivoSalida;
    cin >> nombreArchivoSalida;
    char *nombreFicheroSalida = new char[nombreArchivoSalida.length() + 1];
    strcpy(nombreFicheroSalida, nombreArchivoSalida.c_str());
    SerieTemporal serieTemporal(nombreFicheroEntrada);
    
    for(int i = 0; i < serieTemporal.numeroPuntosSerieTemporal(); i++)
    {
        serieTemporal.dominantePunto(i, true);
    }
}   

void metodo2()
{

}
#include "algoritmo.hpp"
#include "serietemporal.hpp"
#include "punto.hpp"
#include "recta.hpp"
#include <string.h>
#include <vector>

using namespace std;

// Funcion que minimiza el ISE, usando programación dinamica para calcular la solcion optima a todos los subproblemas posibles hasta llegar a la solucion optima.

segmentacionMinISE(SerieTemporal serie, int segPoints)
{
    int numeroPuntosSerie = serie.numeroPuntosSerieTemporal()

    vector <int> puntosDominantes;

    

    for(int i = 0; i < puntosDominantes.size();i++)
    {
        serieTemporal.puntoDominante(puntosDominantes[i],true);
    }
}

void metodo1()
{
    cout <<"Introduzca el numero de puntos de la serie segmentada: ";
    double segPoints; 
    cin >> segPoints;

    cout << "Introduzca el nombre del archivo de entrada: ";
    string nombreArchivo;
    cin >> nombreArchivo;
    char *nombreFicheroEntrada = new char[nombreArchivo.length() + 1];
    strcpy(nombreFicheroEntrada, nombreArchivo.c_str());

    Clock reloj;
    double tiempoEjec;
    
    serieTemporal serie(nombreFicheroEntrada);

    reloj.start();
    segmentacionMinISE();       
    
    if(reloj.isStarted())
    {
        reloj.stop();
        tiempoEjec = reloj.elapsed();
    }

    double ISE, eMax;
    int posicionEMax;

    SerieTemporal.erroresSegmentacion(ISE, eMax, posicionEMax);

    cout << "Tiempo de ejecucion: " << tiempoEjec << " segundos" << endl;
    cout << "ISE: " << ISE << endl;
    cout << "eMax: " << eMax << endl;
    cout << "Posicion eMax: " << posicionEMax << endl;

}   

void metodo2()
{
}
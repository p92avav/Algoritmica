#include "algoritmo.hpp"
#include "serietemporal.cpp"
#include "punto.cpp"
#include "recta.cpp"
#include <string>
#include <vector>

using namespace std;

void minimoValorVector(vector<long double> &v, long double &minimo, int &posicion)
{
    minimo = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < minimo)
        {
            minimo = v[i];
            posicion = i;
        }
    }
}

void algoritmoMinimizarISE(SerieTemporal &serieTemporal, int izq, int der, double segPoints)
{

    vector<int> puntosDominantes;
    for(int i = 0; i < serieTemporal.numeroPuntosSerieTemporal(); i++)
    {
        puntosDominantes.push_back(i+1);
    }
    vector<long double> erroresDominantes;
    erroresDominantes.push_back(999);
    for(int i = 1; i < puntosDominantes.size()-2; i++)
    {
        long double ISE = serieTemporal.calcularIseEntreDosPuntos(i-1, i+1);
        erroresDominantes.push_back(ISE);
    }
    erroresDominantes.push_back(999);

    //calcular punto error minimo : X
    long double minimoISE;
    int posicionISEMin;

    minimoValorVector(erroresDominantes, minimoISE, posicionISEMin);
    cout<<"1"<<endl;
    while(puntosDominantes.size() > segPoints)
    {
        //cout<<"2"<<endl;
        long double minISE;
        int posicionISE; 
        minimoValorVector(erroresDominantes, minISE, posicionISE);
        puntosDominantes.erase(puntosDominantes.begin() + posicionISE);
        erroresDominantes.erase(erroresDominantes.begin() + posicionISE);
        
        //CHECK QUE P-1 NO SEA 0 Y P NO SEA N-1 2 IFS

        erroresDominantes[posicionISE-1] = serieTemporal.calcularIseEntreDosPuntos(posicionISE-2, posicionISE);
        erroresDominantes[posicionISE] = serieTemporal.calcularIseEntreDosPuntos(posicionISE-1, posicionISE+1);


    }

    //eliminar dominante[x] y errores[x]

    //puntosDominantes.erase(puntosDominantes.begin() + posicionISE -1);
    //erroresDominantes.erase(erroresDominantes.begin() + posicionISE - 1);
    
    //calcular errores[x-1] y errores[x]

}

void algoritmoMinimizarEMax(SerieTemporal &serieTemporal, int izq, int der, double segPoints)
{
    int posicionISE = 0;
    

    serieTemporal.dominantePunto(posicionISE, false);
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

    algoritmoMinimizarISE(serieTemporal, 0, serieTemporal.numeroPuntosSerieTemporal() - 1, 0.0);


    serieTemporal.guardarSegmentacion(nombreFicheroSalida);

    long double ISE;
    long double error;
    int posicionEMax;

    serieTemporal.erroresSegmentacion(ISE, error, posicionEMax);


    cout <<"Numero de puntos dominantes: "<<serieTemporal.contarPuntosDominantes()<<endl;
    cout <<"ISE: "<<ISE<<endl;
    cout <<"Error maximo: "<<error<<endl;
    cout <<"Punto del error maximo: "<<posicionEMax<<endl;
}   

void metodo2()
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

    algoritmoMinimizarEMax(serieTemporal, 0, serieTemporal.numeroPuntosSerieTemporal() - 1, 0.0);


    serieTemporal.guardarSegmentacion(nombreFicheroSalida);

    long double ISE;
    long double error;
    int posicionEMax;

    serieTemporal.erroresSegmentacion(ISE, error, posicionEMax);


    cout <<"Numero de puntos dominantes: "<<serieTemporal.contarPuntosDominantes()<<endl;
    cout <<"ISE: "<<ISE<<endl;
    cout <<"Error maximo: "<<error<<endl;
    cout <<"Punto del error maximo: "<<posicionEMax<<endl;
}
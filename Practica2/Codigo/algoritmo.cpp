#include "algoritmo.hpp"
#include "serietemporal.cpp"
#include "punto.cpp"
#include "recta.cpp"
#include <string>

using namespace std;

void metodo1()
{
    cout <<"Introduzca el error Maximo deseado: ";
    double eMax; 
    cin >> eMax;

    cout <<"Indique el archivo con los datos de la serie temporal: "<<endl;
    string inputPath;
    cin >> inputPath;

    SerieTemporal sTemp(inputPath);

    cout <<"Ruta dada es: "<<inputPath<<endl;

  

}

void metodo2()
{
    cout <<"Introduzca el error Maximo deseado: ";
    double eMax; 
    cin >> eMax;


}
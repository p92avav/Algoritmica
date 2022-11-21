#include <iostream>
#include "funcionesObligatorias.hpp"

using namespace std;

void printMenu(int  & opc)
{
    cout <<"Indique la opcion que desea: "<<endl;
    cout <<" 1 - Todas las posibles soluciones de las N-Reinas."<<endl;   
    cout <<" 2 - Solucion unica de las N-Reinas"<<endl;
    cout <<" 3 - Solucion mediante el algoritmo de Las Vegas"<<endl;
    cout <<"Introduzca cualquier otro valor para salir"<<endl;
    cin >> opc;

        switch(opc)
        {
            case 1:
                solucionesNReinas();
                break;

            case 2:
                solucionUnicaNReinas();
                break;

            case 3:
                solucionLasVegas();
                break;

            default:
                exit(EXIT_SUCCESS);
                break;
        }

}


int main()
{
    system("clear");
    int opc;

    printMenu(opc);

    while(opc != 0)
    {
        printMenu(opc);
    }

    exit(EXIT_SUCCESS);
}
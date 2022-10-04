#include "algoritmo.hpp"

using namespace std;

void printMenu(double & errorMax, int  & opc)
{
    cout <<"Indique la opcion que desea: "<<endl;
    cout <<" 1 - Metodo 1"<<endl;   
    cout <<" 2 - Metodo 2"<<endl;
    cout <<" Cualquier otro numero - Salir"<<endl;
    cin >> opc;
    
    cout<<"Indique el error maximo: ";
    cin >> errorMax;
}


int main()
{
    system("clear");
    double eMax;
    int opc;

    cout<<"Introduzca el valor de eMax: ";
    cin>>eMax;

    printMenu(eMax, opc);

    cout<<"eMax: "<<eMax<<" opc: "<<opc<<endl;

    switch(opc)
    {
        case 1:
            //TODO: Metodo1
            break;

        case 2:
            //TODO: Metodo2

            break;

        default:
            exit(EXIT_SUCCESS);
            break;
    }

}
#include "algoritmo.cpp"

using namespace std;

void printMenu(int  & opc)
{
    cout <<"Indique la opcion que desea: "<<endl;
    cout <<" 1 - Metodo 1"<<endl;   
    cout <<" 2 - Metodo 2"<<endl;
    cout <<" Pulse cualquier otro numero para salir"<<endl;
    cin >> opc;

}


int main()
{
    system("clear");
    int opc;


    printMenu(opc);

    cout<<" opc: "<<opc<<endl;

    switch(opc)
    {
        case 1:
            metodo1();
            break;

        case 2:
            metodo2();
            break;

        default:
            exit(EXIT_SUCCESS);
            break;
    }

}
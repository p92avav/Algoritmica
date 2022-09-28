#include "Quicksort.hpp"
#include "Reloj.cpp"
#include "Calculos.cpp"

using namespace std;

void tiemposOrdenacionQuickSort(int nMin, int nMax, int incremento, int repeticiones, 
vector <double> &tiemposReales, vector <double> &numeroElementos)
{
    Clock reloj;
    for(int i = nMin; i <= nMax; i )
    {
        
        for(int j = 0; j < repeticiones; j++)
        {
            vector <int> v (i);

            rellenarVector(v);

            reloj.start();
            sort(v.begin(), v.end());
            if(reloj.isStarted())
            {
                reloj.stop();
                tiemposReales.push_back(reloj.elapsed());
            }

            estaOrdenado(v);
            numeroElementos.push_back(i);
        }
        i = i + incremento;
    }
}

void algoritmoQuicksort()
{
    cout << "Indique el numero minimo de elementos del vector" << endl;
    int nMin;
    cin >> nMin;

    cout << "Indique el numero maximo de elementos del vector" << endl;
    int nMax;
    cin >> nMax;

    while(nMax <= nMin)
    {
        cout << "Error, introduzca un numero de elementos mayor al indicado como 'numero minimo de elementos del vector'" <<endl;
        cin >> nMax;
    }

    cout << "Indique el incremento en el numero de elementos del vector" << endl;
    int incremento;
    cin >> incremento;

    cout << "Indique el numero de repeticiones para cada prueba" << endl;
    int repeticiones;
    cin >> repeticiones;

    vector <double> tiemposReales;
    vector <double> tiemposEstimados;
    vector <double> numeroElementos;
    vector <double> a;

    tiemposOrdenacionQuickSort(nMin, nMax, incremento ,repeticiones, tiemposReales, numeroElementos);

    ofstream fich("tiemposRealesQuicksort.txt");
    if (!fich)
    {
        cout << "Error al abrir el archivo\n";
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < tiemposReales.size(); i++)
    {
        fich << numeroElementos[i] << " " << tiemposReales[i] << endl;
    }

    ajusteNlogN(numeroElementos, tiemposReales, a);
    
    calcularTiemposEstimadosNlogN(numeroElementos, a, tiemposEstimados);

    calcularCoeficienteDeterminacion(tiemposReales, tiemposEstimados);

    cout <<"\nLa funcion del ajuste es : t(n) = "<<a[0]<<" + "<<a[1]<<" * n * log(n) "<<endl;

    ofstream fich2("datosFinalesQuicksort.txt");
    if (!fich2)
    {
        cout << "Error al abrir el archivo\n";
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < tiemposReales.size(); i++)
    {
        fich2 << numeroElementos[i] << " "<<tiemposReales[i] <<" "<< tiemposEstimados[i] << endl;
    }

    double num;
    do
    {
        cout <<"\n\nIndique un determinado numero de elementos para estimar el tiempo que tardaria en ordenarse. Introduzca 0 para salir"<<endl;
        cin >> num;
        while(num < 1 && num != 0)
        {
            cout<<"Introduzca un numero mayor a 1"<<endl;
            cin >> num;
        }

        if(num == 0)
        {
            exit(EXIT_SUCCESS);
        }

        double numEstimado = calcularTiempoEstimadoNlogN(num, a);

        double seconds = numEstimado / 1000000;
        double minutes = seconds / 60;
        double hours = minutes / 60;
        double days = hours / 24;
        double years = days / 365;

        cout <<"\n\nPara un tamaño de " << num <<" elementos el tiempo estimado es :"<<endl;

        cout<< seconds <<" segundos, ";
        cout<< minutes <<" minutos, ";
        cout<< hours <<" horas, ";
        cout<< days <<" dias, ";
        cout<< years <<" años ";



    }while(num != 0);
}

void rellenarVector(vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++) 
    {
        v[i] = rand() % 10000000;
    }
}

bool estaOrdenado(const vector <int> &v)
{
    bool res = true;
    for(int i = 0; i < v.size() -1; i++)
    {
        if(v[i] > v[i+1])
        {
            res = false;
        }
    }

    return res;
}


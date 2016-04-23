#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int matriz[n][n];
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>matriz[i][j];
        }
    }
    int mayor = matriz[0][0];

    //mayor 1x1
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
            }
        }
    }


    suma = 0;
    for(int filaDesde = 0; filaDesde < n; filaDesde++)
    {
        for(int columnaDesde = 0; columnaDesde < n; columnaDesde++)
        {
            for(int filaHasta = 0; filaHasta < n; filaHasta++)
            {
                for(int columnaHasta = 0; columnaHasta < n; columnaHasta++)
                {
                    suma = 0;
                    for(int i = filaDesde; i < filaHasta; i++)
                    {
                        for(int j = columnaDesde; j < columnaHasta; j++)
                        {
                            suma = suma + matriz[i][j];
                        }
                    }
                    if(suma > mayor)
                    {
                        mayor = suma;
                    }

                }
            }
        }
    }
    cout<<mayor<<endl;
    return 0;
}

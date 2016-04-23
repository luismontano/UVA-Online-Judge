#include<iostream>
using namespace std;

int pot2( int n)
{
    if(n == 0)
        return 1;
    int res=1;
    for(int i = 1; i <= n; i++)
    {
        res*=2;
    }
    return res;
}

int main()
{
    int desde = 0;
    int hasta;
    int n;
    cin>>n;
    while(n> 0)
    {
        if(n == 1)
        {
            cout<<1<<endl;
        }
        else
        {
            int hastaI = 1;
            bool limitesEncontrados = false;
            while(limitesEncontrados == false)
            {
                hasta = pot2( hastaI);
                if(desde <= n && n <= hasta )
                {
                    limitesEncontrados = true;

                }
                else
                {
                    desde = hastaI;
                    hastaI++;
                }
            }

            int cont = 0;
            int numDesde = pot2(desde);
            int numHasta = pot2(hastaI);
            for(int i = numDesde; i <= numHasta; i++)
            {
                if(i == n)
                {
                    break;
                }
                else
                {
                    cont+=2;
                }
            }
            cout<<cont<<endl;
        }
        cin>>n;

    }

    return 0;
}

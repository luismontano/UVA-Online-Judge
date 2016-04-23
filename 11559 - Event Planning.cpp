#include<iostream>
using namespace std;
int main()
{
    int participants, budget, hotels, weeks, price, beds, minCost, aux;
    while(cin>>participants)
    {
        cin>>budget>>hotels>>weeks;
        minCost =  20000001;
        for(int i = 0; i < hotels; i++)
        {
            cin>>price;
            for(int j = 0; j < weeks; j++)
            {
                cin>>beds;
                aux = participants*price;
                if(beds >= participants)
                    if(aux <= budget)
                        if(aux < minCost)
                            minCost = aux;
            }
        }
        if(minCost < 20000001)
            cout<<minCost<<endl;

        else
            cout<<"stay home"<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define forn(size) for(int i = 0; i < size; i++)
int main()
{
    int participants, budget, hotels, weeks, price, beds, minCost;
    while(scanf("%d %d %d %d", &participants, &budget, &hotels, &weeks))
    {
        minCost =  20000001;
        forn(hotels)
        {
            scanf("%d",&price);
            forn(weeks)
            {
                scanf("%d",&beds);
                if(beds >= participants)
                    if(participants*price <= budget)
                        if(participants*price < minCost)
                            minCost = participants*price;
            }
        }
        if(minCost < 20000001)
            printf("%d\n", minCost);

        else
            printf("stay home\n");
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define forn(size) for(int index = 0; index < size; index++)
int main()
{
    int inputs;
    int a,b;
    scanf("%d", &inputs);
    forn(inputs){
        scanf("%d", &a);
        scanf("%d",&b);
        if(a > b)
            printf(">\n");
        else if(a < b)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}

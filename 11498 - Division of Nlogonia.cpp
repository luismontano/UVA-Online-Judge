#include<bits/stdc++.h>
using namespace std;
#define forn(size) for(int index = 0; index < size; index++)

int main()
{
    int inputs;
    int N, M;   //division point coordinates
    int X, Y;    //homes coordinates
    scanf("%d", &inputs);
    while(inputs != 0){
        scanf("%d %d", &N, &M);
        forn(inputs){
            scanf("%d %d", &X, &Y);
            if(X == N || Y == M)
                printf("divisa\n");
            else if(X < N && Y < M)
                printf("SO\n");
            else if (X > N && Y > M)
                printf("NE\n");
            else if(X < N && Y > M)
                printf("NO\n");
            else
                printf("SE\n");
        }
        scanf("%d", &inputs);
    }
    return 0;
}

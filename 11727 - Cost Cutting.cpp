#include<bits/stdc++.h>
using namespace std;
#define forn(size) for(int index = 0; index < size; index++)
int main(){
    int inputs;
    int num = 3;
    vector<int> wages(num, 0);
    scanf("%d", &inputs);
    forn(inputs){
        forn(num){
            scanf("%d", &wages[index]);
        }
        sort(wages.begin(), wages.end());
        printf("Case %d: %d\n", index+1, wages[1]);
    }
    return 0;
}

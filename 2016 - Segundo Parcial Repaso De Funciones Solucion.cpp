#include<iostream>
using namespace std;
bool esPrimo(int n);
void imprimirPares(int A, int B);
int MCD(int A, int B);
int main()
{
    int A, B;
    cout<<"DIGITE EL NUMERO A: ";
    cin>>A;
    cout<<"DIGITE EL NUMERO B: ";
    cin>>B;
    if(esPrimo(A) == true && esPrimo(B)== true)
    {
        imprimirPares(A,B);
    }
    else
    {
        cout<<MCD(A,B);
    }
    return 0;
}
bool esPrimo(int n)
{
    int cont = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            cont++;
        }
    }
    if(cont == 2)
    {
        return true;
    }
    return false;
}
void imprimirPares(int A, int B)
{
    for(int i = A; i <= B; i++)
    {
        if(i%2 == 0)
        {
            cout<<i<<endl;
        }
    }
}

int MCD(int A, int B){
    int mcd = 1;
    for(int i = 1; i <= A; i++){
        if(A%i == 0 && B%i == 0){
            mcd = i;
        }
    }
    return mcd;
}

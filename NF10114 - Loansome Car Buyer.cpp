#include<bits/stdc++.h>
using namespace std;
#define forn(size) for(int index = 0; index < size; index++)
#define forv(vector, i) for(int index = i; index < vector.size(); index++)
int main()
{
    int months, depreciationRecords, month;
    double downPayment, amountOfLoan, carsValue, depreciation;
    vector<double> DPdepreciations;
    scanf("%d %lf %lf %d", &months, &downPayment, &amountOfLoan, &depreciationRecords);
    while(months > 0)
    {
        DPdepreciations.assign(months, 0.0);
        carsValue = downPayment + amountOfLoan;
        forn(depreciationRecords)
        {
            scanf("%d %lf", &month, &depreciation);
            DPdepreciations[month] = depreciation;
        }
        forn(DPdepreciations.size())
        {
            if(DPdepreciations[index] == 0.0)
            {
                DPdepreciations[index] = DPdepreciations[index-1] ;
            }
        }
        forn(months){
            carsValue = carsValue - DPdepreciations[index]*carsValue;
            amountOfLoan-=downPayment;
            cout<<" A: "<<amountOfLoan<<" C: "<<carsValue<<endl;
            if(carsValue - amountOfLoan < 0){
                    printf("%d\n", index);
                break;
            }
        }
        scanf("%d %lf %lf %d", &months, &downPayment, &amountOfLoan, &depreciationRecords);
    }
    return 0;
}

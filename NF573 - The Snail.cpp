#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double height, distanceUp, distanceDown, fatigue;
    double initialHeight = 0.0;
    int day = 1;
    double value;
    while(true)
    {
        cin>>height>>distanceUp>>distanceDown>>fatigue;
        day = 1;
        value = fatigue*distanceUp/100;
        initialHeight = 0.0;
        bool negativo = false;
        if(height != 0 && distanceUp !=0 && distanceDown != 0 && fatigue != 0)
        {
            while(initialHeight < height){
//                cout<<" "<<day<<" "<<initialHeight<<" "<<distanceUp;
                initialHeight = initialHeight + distanceUp;
                if(initialHeight > height){
                        cout<<"success on day ";
                    break;
                }
//                cout<<" "<<initialHeight;
                if(distanceUp - value < 0)
                    negativo = true;
                distanceUp = abs(distanceUp - value);
                initialHeight = initialHeight - distanceDown;
                if(initialHeight < 0){
                    cout<<"failure on day ";
                    break;
                }
//                cout<<" "<<initialHeight<<endl;
                day++;
            }
            if(negativo)
                day--;
            cout<<day<<endl;
        }
        else
            break;
    }

    return 0;
}

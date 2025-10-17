
#include <iostream>
using namespace std;
struct SalesRecord{
    string month[12];
    float amount[12];
};

int main()
{
    SalesRecord display;
    cout<<"Enter the month name and the amount"<<endl;
    for(int i=0;i<12;i++){
        cin>>display.month[i];
        cin>>display.amount[i];
    }

    float min=22222222;
    float max=-22222222;
    for(int i=0;i<12;i++){
        max=max>(display.amount[i])?max:(display.amount[i]);
        min=min<(display.amount[i])?min:(display.amount[i]);
    }

    string a,b;
    for(int i=0;i<12;i++){
        if(display.amount[i]==max){
            a=display.month[i];
        }
        if(display.amount[i]==min){
            b=display.month[i];
        }
    }

    cout<<"Maximum is in the month "<<a<<endl;
    cout<<"Maximum amount : "<<max<<endl;
    cout<<"Minimum is in the month "<<b<<endl;
    cout<<"Minimum amount : "<<min<<endl;
}

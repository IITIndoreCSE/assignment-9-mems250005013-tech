#include <iostream>
using namespace std;

struct item{
    int id[6];
    float cost[6];
};

int main()
{
    item display;

    display.id[0]=1;
    display.id[1]=2;
    display.id[2]=3;
    display.id[3]=4;
    display.id[4]=5;

    display.cost[0]=35;
    display.cost[1]=65;
    display.cost[2]=25;
    display.cost[3]=75;
    display.cost[4]=45;


    cout<<"Details of the items whose cost is greater than 50"<<endl;

    for(int i=0;i<5;i++){
        if(display.cost[i]>50){
            cout<<"Id: "<<display.id[i]<<" and cost:"<<display.cost[i]<<endl;
        }
    }
}

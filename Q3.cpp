
#include <iostream>
using namespace std;
struct point{
    float x[7];
    float y[7];
};
int main()
{
    point quadrant;
    for(int i=0;i<7;i++){
        cout<<"Enter the co ordinates of the "<<i+1<<" point"<<endl;
        cin>>quadrant.x[i];
        cin>>quadrant.y[i];
    }
    int count=0;
    for(int i=0;i<7;i++){
        if(quadrant.x[i]>0 && quadrant.y[i]>0){
            count++;
        }
    }
    cout<<"Total numbers of the points in first quadrant are = "<<count;
}

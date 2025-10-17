#include <iostream>
using namespace std;

struct colour{
    int red[5];
    int green[5];
    int blue[5];
};

int main()
{
    colour show;

    cout<<"Enter the details of the RGB colour"<<endl;

    for(int i=0;i<5;i++){
        cout<<"Values of the "<<i<<" element"<<endl;
        cin>>show.red[i];
        cin>>show.green[i];
        cin>>show.blue[i];
    }

    cout<<"The changed value of the colour"<<endl;

    for(int i=0;i<5;i++){
        show.red[i]=255-show.red[i];
        show.green[i]=255-show.green[i];
        show.blue[i]=255-show.blue[i];

        cout<<show.red[i]<<" ";
        cout<<show.green[i]<<" ";
        cout<<show.blue[i]<<endl;
    }
}

#include<iostream>
using namespace std;

int main()
{
    string commands[3]={"LockDoor","OFFLamp","OFFTV"};
    int i;
    float time;

    cout<<"Enter Time , It is PM ,Write 1PM as 13PM "<<endl;
    cin>>time;
    if(time>10)
        for(i=0; i<3; i++)
        cout<<commands[i]<<endl;

    return 0;
}

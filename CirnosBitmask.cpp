#include<iostream>
using namespace std;
int main()
{
    int x=2;
    cin>>x;
    int i;
    for(int i =0;i<x;i++)
    {
        
    }
    
    cin>>i;
    while(true)
    {   i++;
        if((x xor i)>0 && (x and i)>0)
        break;
    }
    cout<<"here: "<<i<<endl;
}
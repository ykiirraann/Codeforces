#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count = 0;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int count = 0;
        for(int j=1; j<n; j++)
        {
            
            if(a[j]<a[j+1])
            count+= 1;
        }
    } cout<<count<<endl;
}
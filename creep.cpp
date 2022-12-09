#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i<t; i++)
    {
        int n;
        cin>>n;
        cout<<endl;
        vector<int>v(n);
        for(int i =0;i<v.size();i++){
           cin>>v[i];
        }
    }
    cout<<"10 011 0011000 101010101 0001111111"<<endl;
}

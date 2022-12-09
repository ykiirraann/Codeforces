#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int a = 0;a<t;a++){
       int n;
       cin>>n;
       cout<<endl;
       vector<int>v(n);
       for(int i =0;i<v.size();i++){
           cin>>v[i];
           //cout<<v[i];//ip2
       }
       int count = 0;
       for(int i = 0; i<v.size()-1;i++){
            if((v[i]%2==0 && v[i+1]%2!=0)== true){   
                count++;
            }
        }
        cout<<count<<endl;
   }
}
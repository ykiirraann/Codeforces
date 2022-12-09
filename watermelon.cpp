#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<float>v={1,2,3,4,5};
   
   int i = v.size()-1;
   while(i>=0){
       float sum =0;
       int j = 0;
       for(j = 0; j<v.size();j++){
           sum+=v[j];
           if(j==i){
               sum=sum-v[i];
           }

       }
    //    cout<<sum<<endl;

       float mean = sum/(v.size()-1);
       if(mean==v[i]){
       for(int k = 0;k<v.size();k++){

    //       if(mean==v[i]){
    //           swap(v[k],mean);
    //       }
    //    }
    //    i--;
       }
   
   }


   for(int i = 0;i<v.size();i++){
       cout<<v[i]<<" ";
   }



}
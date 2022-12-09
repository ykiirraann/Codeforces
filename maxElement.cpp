#include<iostream>
using namespace std;
int main()
{
    int i, max, min;
    int arr[]= {10,20,5,24,30,165};
    max = arr[0];
    //min = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]); // to find out the size of array
    for(i =1; i<n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
            //min = arr[i];
    }
    cout<<"largest no. is : "<<max<<endl;

}
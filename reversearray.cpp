#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 10000
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[10000];
    int n;
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[n-i]<<" ";
    } 
    return 0;
}
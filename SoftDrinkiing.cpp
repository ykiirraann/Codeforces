#include<iostream>
using namespace std;
int main()
{
    int n;
    int k;
    int l;
    int c;
    int d;
    int p;
    int nl;
    int np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min(min(k*l / nl, c*d), p / np) / n <<endl;
    return 0;
}




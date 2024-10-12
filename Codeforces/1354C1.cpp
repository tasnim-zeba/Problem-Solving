#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    double pi=3.141592653589793238;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double theta=360.0/(4*n);
        double d=1/tan(pi*theta/180);
        cout<<fixed<<setprecision(9)<<d<<endl;
    }
}

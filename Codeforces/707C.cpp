#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long x=1e18;
int main()
{
    long long n;
    cin>>n;
    if(n%2!=0)
    {
        double d,m,k;
        d=(n*n)/2.0;
        m=d-0.5;
        k=d+0.5;
    if((m>=1&&m<=x)&&(k>=1&&k<=x))
    {cout<<(long long)m<<" "<<(long long)k<<endl;
    }
    else
    {
    cout<<-1<<endl;
    }
    }
    else
    {
        ll d,m,k;
        d=(n/2)*(n/2);
        m=d-1;
        k=d+1;
        if((m>=1&&m<=x)&&(k>=1&&k<=x))
    {cout<<m<<" "<<k<<endl;
    }
    else
    {
    cout<<-1<<endl;
    }
    }
return 0;
}

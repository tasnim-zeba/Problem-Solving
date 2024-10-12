#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a[10006];
    ll c=19;
    int i,j,n,m;
    i=1;
    while(1)
    {
        n=c;
        int s=0;
        while(n!=0)
        {
            s=s+n%10;
            n=n/10;
        }
        if(s==10)
        {
            a[i]=c;
            i++;
        }
        if(i==10006)
        {
            break;
        }
        c=c+9;
    }
    for(i=0;i<10006;i++)
    {
       /// cout<<a[i]<<" ";
    }
    int k;
    cin>>k;
    cout<<a[k]<<endl;
    return 0;
}


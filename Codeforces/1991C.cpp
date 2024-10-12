#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
           cin>>a[i];
        }
        int f =1;
        for(int i=2; i<=n; i++)
        {
           if(a[1]%2!=a[i]%2)
           {
               f=0;
               break;
           }
        }
        if(f==0)
        {
            cout<<-1<<endl;
            continue;
        }
        if(a[1]&1)
        {
            cout<<30<<endl;
        }
        else
        cout<<31<<endl;
        for(int i=29; i>=0; i--)
        {
            cout<<(1<<i)<<" ";
        }
        if(a[1]&1)cout<<endl;
        else
        cout<<1<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2],b[n+1];
        for(int i=1; i<n; i++)
        {
            cin>>b[i];
        }
        a[1] = b[1];
        a[n] = b[n-1];
        for(int i=2; i<n; i++)
        {
            a[i] = (b[i-1] | b[i]);
        }
        int f = 1;
        for(int i=1; i<n; i++)
        {
            if((a[i]&a[i+1])!=b[i])
            {
                f=0;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
        }
        else{
            for(int i=1; i<=n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}


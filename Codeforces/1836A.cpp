#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],f[101];
        for(i=0;i<=100;i++)
        {
            f[i]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            f[a[i]]++;
        }
        k=1;
        for(i=1;i<=100;i++)
        {
            if(f[i]>f[i-1])
            {
                k=0;break;
            }
        }
        if(k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


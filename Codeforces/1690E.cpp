#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,k,s,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1],fre[n+1];
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+(a[i]/k);
            fre[i]=a[i]%k;
        }
        sort(fre,fre+n);
        for(i=0,j=n-1;i<j;)
        {
            if(fre[i]+fre[j]<k)
            {
                i++;
            }
            else
            {
                s++;
                i++;
                j--;
            }
        }
        cout<<s<<endl;
    }
}

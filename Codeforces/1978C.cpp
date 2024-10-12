#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            a[i]= i;
        }
        if(k%2){
            cout<<"No"<<endl;
            continue;
        }
        for(int i=1, j=n; i<j;)
        {
            if(k==0)break;
            ll d= 2LL*(j-i);
            if(d<=k){
                swap(a[i], a[j]);
                k=k-d;
                i++;
                j--;
            }
            else if((d-k)>=4){
                i++;
                j--;
            }
            else{
                i++;
            }
        }
        if(k==0){
            cout<<"Yes"<<endl;
            for(int i=1; i<=n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    ///fio
    ll t,n,k,i,j,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //vector<ll>v;
        if(n==3)cout<<-1<<endl;
        else if(n%2==0)
        {
            for(i=n;i>=1;i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
           ll  x=n/2;
            for(i=x+1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            for(i=x;i>=1;i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}


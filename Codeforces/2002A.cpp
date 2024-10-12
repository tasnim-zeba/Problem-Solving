#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll ans = 1;
        if(m>=k){
            ans = ans*k;
        }
        else{
            ans = ans*m;
        }
        if(n>=k){
            ans = ans * k;
        }
        else{
            ans = ans*n;
        }
        cout<<ans<<endl;
    }
}


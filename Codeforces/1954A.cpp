#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        j = (n/m);
        if(n%m)j++;
        if(k>=(n-j))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

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
        if(n%2)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<(n/2)<<" "<<1<<endl;
        }
    }
}


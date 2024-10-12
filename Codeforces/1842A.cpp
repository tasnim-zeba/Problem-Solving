#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,r,m,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        a=0,b=0;
        for(i=0;i<n;i++)
        {
            cin>>k;
            a=a+k;
        }
        for(i=0;i<m;i++)
        {
            cin>>k;
            b+=k;
        }
        if(a>b)
        {
            cout<<"Tsondu"<<endl;
        }
        else if(a<b)
        {
            cout<<"Tenzing"<<endl;
        }
        else
        {
            cout<<"Draw"<<endl;
        }
    }
}


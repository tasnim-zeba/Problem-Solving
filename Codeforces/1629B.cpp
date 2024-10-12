#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,l,r,k,n,o,e;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>k;
        n=(r-l)+1;
        if((l%2!=0)&&(r%2!=0))
        {
            o=n/2 + 1;
            e=n-o;
        }
        else if((l%2==0)&&(r%2==0))
        {
            e=n/2 + 1;
            o=n-e;
        }
        else{
            e=n/2;
            o=n/2;
        }
        if(n==1)
        {
            if(l>1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(k>=(o))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        ///cout<<o<<endl;
    }
}

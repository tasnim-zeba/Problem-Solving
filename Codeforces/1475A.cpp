#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        while(n%2==0)
        {
            n=n/2;
        }
        if(n!=1&&n%2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

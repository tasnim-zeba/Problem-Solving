#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,c,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        s=a+b+c;
        if(s%9==0&&a>=(s/9)&&b>=(s/9)&&c>=(s/9))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,a,b,i,p;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>a>>b>>s;
        if(b>=0)
        {
            cout<<(a+b)*n<<endl;
        }
        else
        {
            p=unique(s.begin(),s.end())-s.begin();
            ///cout<<p<<endl;
            i=(p/2)+1;
            cout<<n*a+b*i<<endl;
        }
    }
    return 0;
}

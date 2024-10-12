#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,g,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
        {
            swap(a,b);
        }
        g=b-a;
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
        }
        else
        {
            x=a%g;
            y=min(x,g-x);
            cout<<g<<" "<<y<<endl;

        }
    }
    return 0;
}

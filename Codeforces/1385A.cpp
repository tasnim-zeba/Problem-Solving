#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(x!=y&&x!=z&&y!=z)
        {
            cout<<"NO"<<endl;
        }
        else if(x==y&&y==z)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else
        {
            if(x==y)
            {
                if(x<z)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<z<<" "<<z<<" "<<x<<endl;
                }
            }
            else if(x==z)
            {
                if(x<y)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<y<<" "<<y<<" "<<x<<endl;
                }
            }
            else if(y==z)
            {
                if(y<x)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<x<<" "<<y<<endl;
                }
            }
        }
    }
    return 0;
}

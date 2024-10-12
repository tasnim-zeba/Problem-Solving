#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        if(n==1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        if(a==n&&b==n)
        {
             cout<<"Yes"<<endl;
            continue;
        }
        if((a+b)<=(n-2))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

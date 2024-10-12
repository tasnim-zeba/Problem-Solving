#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,o,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        o=0;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x%2)o++;
        }
        if(o%4==0||o%4==3)
        {
            cout<<"Alice"<<endl;
        }
        else if(o%4==2)
        {
            cout<<"Bob"<<endl;
        }
        else if(o%4==1)
        {
            if(n%2==0)cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
    }
}

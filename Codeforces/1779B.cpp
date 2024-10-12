#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2)
        {
            if(n==3)
                cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                y=n/2;
                x=y-1;
                y=y*(-1);
                for(i=1; i<=n; i++)
                {
                    if(i%2)
                    {
                        cout<<x<<" ";
                    }
                    else
                    {
                        cout<<y<<" ";
                    }
                }
                cout<<endl;
            }
            continue;
        }
        cout<<"YES"<<endl;
        for(i=1; i<=n; i++)
        {
            if(i%2)
            {
                cout<<5<<" ";
            }
            else
            {
                cout<<-5<<" ";
            }
        }
        cout<<endl;
    }
}


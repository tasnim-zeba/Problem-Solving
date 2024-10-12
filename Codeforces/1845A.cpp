#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x;
        if(x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(i=1; i<=n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(k<2)cout<<"NO"<<endl;
            else if(n%2==0)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(i=1; i<=n/2; i++)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
            }
            else if(k<3)
            {
                cout<<"NO"<<endl;
            }
            else if(n==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(i=1; i<=((n/2)-1); i++)
                {
                    cout<<2<<" ";
                }
                cout<<3<<endl;
            }
        }
    }
}

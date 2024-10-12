#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,r,i,j,ev,odd;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        int flag=1;
        if(n%2==0&&r%2==0);
        else if(n%2==0&&r%2!=0);
        else if(n%2!=0&&r%2!=0&&r==1);
        else
        {
            flag=0;
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ev=1,odd=2;
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=r; j++)
                {
                    if(i%2!=0)
                    {
                        cout<<ev<<" ";
                        ev=ev+2;
                    }
                    else
                    {
                        cout<<odd<<" ";
                        odd=odd+2;
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int a[102];
int main()
{
    int t,n,k,i,c,f,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==0)
        {
            for(i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            if(n%2==0)
            {
                c=n-1;
            }else{
                c=n;
            }
            f=c/2;
            if(k>f)
            {
                cout<<-1<<endl;
            }
            else{
                cout<<1<<" ";
                for(i=2,j=3;i<=2*k;i=i+2,j=j+2)
                {
                    cout<<j<<" "<<i<<" ";
                }
                for(i=2*k+2;i<=n;i++)
                {
                    cout<<i<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}

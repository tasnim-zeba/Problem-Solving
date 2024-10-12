#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2)
        {
            cout<<1<<" "<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(n==3)
        {
            cout<<1<<" "<<1<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<3<<" "<<3<<endl;
        }
        else
        {
            cout<<1<<" "<<1<<endl;
            for(i=3;i<n;i++)
            {
                cout<<1<<" "<<i<<endl;
            }
            cout<<2<<" "<<1<<endl;
            cout<<n<<" "<<n<<endl;
        }
    }
}

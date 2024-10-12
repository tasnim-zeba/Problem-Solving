#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, s, j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(i=1; i<=n; i++)
        {
            s = s + (2*i - 1) * i;
        }
        cout<<s<<" "<<2*n<<endl;
        for(i=n; i>=1; i--)
        {
            cout<<1<<" "<<i<<" ";
            for(j=1; j<=n; j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
            cout<<2<<" "<<i<<" ";
            for(j=1; j<=n; j++)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
}

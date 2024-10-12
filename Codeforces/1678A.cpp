#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll e,n,i,c;
    cin>>e;
    while(e--)
    {
        cin>>n;
        ll ar[n+1];
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        if(ar[0]==0)
        {
            c=0;
            for(i=0;i<n;i++)
            {
                if(ar[i]!=0)
                {
                    c++;
                }
            }
            cout<<c<<endl;
        }
        else
        {
            int g=0;
            for(i=0;i<n-1;i++)
            {
                if(ar[i]==ar[i+1])
                {
                    g=1;
                    break;
                }
            }
            if(g==1){
                cout<<n<<endl;
            }
            else{
                cout<<n+1<<endl;
            }
        }
    }
    return 0;
}

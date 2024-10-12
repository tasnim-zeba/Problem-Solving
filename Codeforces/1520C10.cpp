#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,te,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1][n+1];
        if(n==2){
            cout<<-1<<endl;
        }
        else{
           x=1;
           te=x;
           for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                a[i][j]=te;
                te=te+2;
                if(te>(n*n))
                {
                    x++;
                    te=x;
                }
            }
           }
           for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
           }
           cout<<endl;
        }
    }
    return 0;
}

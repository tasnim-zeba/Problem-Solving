#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n--;
        int x[n+1], a[n+2];
        for(i=1;i<=n;i++)cin>>x[i];

        if(n==1){
            cout<<x[1]+1<<" "<<x[1]<<endl;
            continue;
        }

        a[0]=x[1]+1, a[n+1]=0;
        cout<<a[0]<<" ";
        for(i=1;i<=n;i++)
        {
            a[i] = max(((x[i]/a[i-1])+1)*a[i-1] + x[i], ((x[i+1]/a[i-1])+1)*a[i-1] + x[i]);
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int main()
{
    int t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[N][2], b[n];
        for(i=0;i<N;i++)
        {
            for(j=0;j<2;j++)
            {
                a[i][j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            a[b[i]][i%2]++;
        }
        sort(b,b+n);
        int f=1;
        for(i=0;i<n;i++)
        {
            a[b[i]][i%2]--;
            if(a[b[i]][i%2]<0)
            {
                f=0;
                break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

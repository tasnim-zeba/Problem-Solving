#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, y;
        cin>>n>>x>>y;
        int a[n+1];
        for(int i=y; i<=x; i++)
        {
            a[i]=1;
        }
        for(int i=x+1; i<=n; i++)
        {
            if((x-i)%2){
                a[i]=-1;
            }
            else{
                a[i]=1;
            }
        }
        for(int i=y-1; i>=1; i--)
        {
            if((i-y)%2){
                a[i]=-1;
            }
            else{
                a[i]=1;
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        int mx=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i!=(n-1)){
                mx=max(mx, a[i]);
            }
        }
        cout<<mx+a[n-1]<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>j;
        }
        int h=(10-n);
        cout<<6*(h*(h-1))/2<<endl;
    }
}

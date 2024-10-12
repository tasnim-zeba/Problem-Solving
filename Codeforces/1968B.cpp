#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        for(i=0,j=0; i<n&&j<m; )
        {
            if(a[i]==b[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        cout<<i<<endl;
    }
}

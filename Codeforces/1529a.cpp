#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        c=1,f=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                c++;
            }
            else
            {
                f=1;
            }
            if(f)
            {
                break;
            }
        }
        cout<<n-c<<endl;
    }
    return 0;
}

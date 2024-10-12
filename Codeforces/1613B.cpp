#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
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
        int f=n/2;
        int c=0;
        for(i=1;i<n;i++)
        {
            if(a[i]!=a[0])
            {
                cout<<a[i]<<" "<<a[0]<<endl;
                c++;
            }
            if(c==f)
            {
                break;
            }
        }
    }
    return 0;
}

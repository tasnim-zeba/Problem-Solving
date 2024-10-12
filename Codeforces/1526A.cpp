#include<bits/stdc++.h>
using namespace std;
long long a[100];
int main()
{
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+2*n);
        for(i=0,j=2*n-1;i<n;i++,j--)
        {
            if(i==(n-1))
            {
                cout<<a[i]<<" "<<a[j]<<endl;
            }
            else
            {
                cout<<a[i]<<" "<<a[j]<<" ";
            }
        }
    }
    return 0;
}

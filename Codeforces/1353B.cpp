#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        c=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(__gcd(a[i],2*a[j])>1)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

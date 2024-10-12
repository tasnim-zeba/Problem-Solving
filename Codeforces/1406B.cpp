#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,i,m1,m2,m3,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        m1=a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5];
        m2=a[n-1]*a[n-2]*a[n-3]*a[0]*a[1];
        m3=a[n-1]*a[3]*a[2]*a[0]*a[1];
        m=max(m1,max(m2,m3));
        cout<<m<<endl;
        /*cout<<m1<<endl;
        cout<<m2<<endl;
        cout<<m3<<endl;*/
    }
    return 0;
}

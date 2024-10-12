#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,s,mx;
    cin>>n;
    long long a[n+1];
    s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    mx=*max_element(a,a+n);
    if(s%2==0&&mx<=(s-mx))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

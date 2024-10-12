#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,mx,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        mx=*max_element(a,a+n);
        if(mx>(s/2))
        {
            cout<<"T"<<endl;
        }
        else if(s%2==0)
        {
            cout<<"HL"<<endl;
        }
        else
        {
            cout<<"T"<<endl;
        }
    }
}

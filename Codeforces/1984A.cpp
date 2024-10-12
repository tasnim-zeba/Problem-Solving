#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1], c=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-1; i++)
        {
            if(a[i]!=a[i+1])c++;
        }
        if(a[0]==a[n-1]|| (c==1&&n==2))
        {
            cout<<"NO"<<endl;
            continue;
        }
        string s="";
        for(i=0; i<n; i++)
        {
            if(a[i]==a[0])
            {
                s+='R';
            }
            else{
                s+='B';
            }
        }
        //cout<<c<<endl;
        if(c==1)
        {
            s="";
            if(a[0]==a[1])
            {
                s+='R';
                for(i=1;i<n;i++)s+='B';
            }
            else
            {
                for(i=1;i<n;i++)s+='B';
                s+='R';
            }
        }
        cout<<"YES"<<endl;
        cout<<s<<endl;
    }
}

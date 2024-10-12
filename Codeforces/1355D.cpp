#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int t,n,s,i,x,j;
    cin>>n>>s;
    if(2*n>s)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        x=s/n;
        j=0;
       for(i=1;i<n;i++)
       {
           cout<<x<<" ";
           j=j+x;
       }
       cout<<s-j<<endl;
       cout<<1<<endl;
    }
}


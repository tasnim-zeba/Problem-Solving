#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,q,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        q=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='Q')q++;
            else if(q>0)
            {
                q--;
            }
        }
        if(q>0)cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}

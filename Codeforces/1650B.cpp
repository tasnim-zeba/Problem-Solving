#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,s1;
        cin>>s;
        s1=s;
        sort(s1.begin(),s1.end());
        int c;
        c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            {
                c++;
            }
        }
        if(c)
        {
        cout<<1<<endl;
        cout<<c<<endl;
        for(i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
            {
                cout<<i+1<<" ";
            }
        }
             cout<<endl;

        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}

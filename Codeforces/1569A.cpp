#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        c=0;
        for(i=0;i<n-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                c=1;
                cout<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
        if(c==0)
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        int f =1;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='1'&&s[i+1]=='0')
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
            cout<<1<<endl;
            continue;
        }
        int p = 1;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]!=s[i+1])p++;
        }
        if(p==2){
            cout<<2<<endl;
            continue;
        }
        else
        {
            cout<<p-1<<endl;
            continue;
        }
    }
}

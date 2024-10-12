#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=1;
        int n=s.size();
            char ch=s[0];
            if(ch=='Y'||ch=='e'||ch=='s')
            {
                for(i=1;i<n;i++)
            {
                if(s[i]=='e'&&ch=='Y')
                {
                    ch='e';
                }
                else if(s[i]=='s'&&ch=='e')
                {
                    ch='s';
                }
                 else if(s[i]=='Y'&&ch=='s')
                {
                    ch='Y';
                }
                else
                {
                    c=0;
                    break;
                }
            }
            }
            else
            {
                c=0;
            }
             if(c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

    }
}

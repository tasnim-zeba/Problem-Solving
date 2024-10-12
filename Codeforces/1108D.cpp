#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c;
    cin>>n;
    string s;
    cin>>s;
    c=0;
    for(i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            if((i+1)<n)
            {
                if(s[i-1]!='R'&&s[i+1]!='R')
                {
                    s[i]='R';
                    c++;
                    i++;
                }
                else if(s[i-1]!='G'&&s[i+1]!='G')
                {
                    s[i]='G';
                    c++;
                    i++;
                }
                else if(s[i-1]!='B'&&s[i+1]!='B')
                {
                    s[i]='B';
                    c++;
                    i++;
                }
            }
            else
            {
                if(s[i-1]!='R')
                {
                    s[i]='R';
                    c++;
                    i++;
                }
                else if(s[i-1]!='G')
                {
                    s[i]='G';
                    c++;
                    i++;
                }
                else if(s[i-1]!='B')
                {
                    s[i]='B';
                    c++;
                    i++;
                }
            }
        }
    }
    cout<<c<<endl;
    cout<<s<<endl;
}

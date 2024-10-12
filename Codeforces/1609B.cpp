#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,x;
    cin>>n>>q;
    string s;
    cin>>s;
    char ch;
    int c=0,c1;
    for(i=0;i<=n-3;i++)
    {
        if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c')
        {
            c++;
        }
    }
    c1=c;
    while(q--)
    {
        cin>>x>>ch;
        ///c=c1;
        if(s[x-1]==ch);
        else{
            if(ch=='a')
            {
                if(s[x]=='b'&&s[x+1]=='c')
                {
                    c++;
                }
            }
            else if(ch=='b')
            {
                if((x-1)>0&&(x-1)<(n-1))
                {
                    if(s[x-2]=='a'&&s[x]=='c')
                    {
                        c++;
                    }
                }

            }
            else if(ch=='c')
            {
                if((x-1)>1)
                {
                    if(s[x-2]=='b'&&s[x-3]=='a')
                    {
                        c++;
                    }
                }

            }
            if(s[x-1]=='a')
            {
                if(s[x]=='b'&&s[x+1]=='c')
                {
                    c--;
                }
            }
            else if(s[x-1]=='b')
            {
                if((x-1)>0&&(x-1)<(n-1))
                {
                    if(s[x-2]=='a'&&s[x]=='c')
                    {
                        c--;
                    }
                }

            }
            else if(s[x-1]=='c')
            {
                if((x-1)>1)
                {
                    if(s[x-2]=='b'&&s[x-3]=='a')
                    {
                        c--;
                    }
                }

            }
            s[x-1]=ch;
        }
        cout<<c<<endl;
    }
    return 0;
}

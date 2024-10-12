#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int c=0,e=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='.')e++;
            if((i+2)<n)
            {
                if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<e<<endl;
        }
    }
}

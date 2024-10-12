#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i,j,c1,f;
    cin>>s;
    n=s.size();
    c1=f=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            c1++;
        }
        else
        {
            if(c1==0)
            {
                f++;
            }
            else
            {
                c1--;
            }
        }
    }
    f+=c1;
    cout<<n-f<<endl;
}

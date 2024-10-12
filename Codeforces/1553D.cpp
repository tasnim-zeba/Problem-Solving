#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,i,j;
    cin>>q;
    string s,t;
    while(q--)
    {
        cin>>s>>t;
        int n=s.size(),m=t.size();
        int c=0;
        for(i=n-1,j=m-1;i>=0&&j>=0;)
        {
            if(s[i]!=t[j])
            {
                i=i-2;
            }
            else
            {
                c++;
                i--;
                j--;
            }
        }
        if(c==m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c,f,i1,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            f=i;
            i1=i;
            while(s[i1]==s[i1+1])
            {
                i1++;
                if(i1==(n-1))
                {
                    break;
                }
            }
            c=0;
            for(j=i1+1;j<n;j++)
            {
                if(s[f]==s[j])
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(c==1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

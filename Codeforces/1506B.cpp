#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='*')
            {
                s[i]='X';
                c++;
                j=i;
                break;
            }
        }
        i=j;
        while(1)
        {
            j=min(n-1,i+k);
            for(;i<j;j--)
            {
                if(s[j]=='.');
                else{
                    break;
                }
            }
            if(i==j)
            {
                break;
            }
            c++;
            i=j;
        }
        cout<<c<<endl;
    }
    return 0;
}

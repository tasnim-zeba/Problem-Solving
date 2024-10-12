#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,c,sum;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        c=sum=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                c++;
            }
            else
            {
                if(c>0)
                {
                    sum++;
                }
                c=0;
            }
        }
        if(c>0)
        {
            sum++;
        }
        cout<<min(2,sum)<<endl;
    }
    return 0;
}

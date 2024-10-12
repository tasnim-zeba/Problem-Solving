#include<bits/stdc++.h>
using namespace std;
int main()
{
    int e,m,j,cnt0,cnt1;
    cin>>e;
    while(e--)
    {

        string s;
        cin>>s;
        m=s.size();
        cnt0=cnt1=0;
        for(j=0;j<m;j++)
        {
            if(s[j]=='0')
            {
                cnt0++;
            }
            else{
                cnt1++;
            }
        }
        if(cnt0!=cnt1)
        {
            cout<<min(cnt0,cnt1)<<endl;
        }
        else{
            cout<<cnt0-1<<endl;
        }
    }
    return 0;
}


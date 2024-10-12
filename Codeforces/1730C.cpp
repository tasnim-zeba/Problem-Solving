#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        n=s.size();
        char mn=s[n-1];
        for(i=n-1;i>=0;i--)
        {
            if(s[i]>mn)
            {
                s[i]++;
                s[i]=min(s[i],'9');
            }
            else if(s[i]<mn)
            {
                mn=s[i];
            }
        }
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
}

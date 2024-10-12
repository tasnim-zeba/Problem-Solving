#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int t,n,i,c,x,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        cin>>k;
        char ch;
        int a[26]={0};
        for(i=1;i<=k;i++)
        {
            cin>>ch;
            a[ch-'a']=1;
        }
        vector<int>v;
        c=0,x=0;
        for(i=0;i<n;i++)
        {
            if(a[s[i]-'a']==1)
            {
                v.push_back(c);
                c=0;
                x++;
            }
            else
            {
                c++;
            }
        }
        int ans=0,j=-1;
        for(i=0;i<v.size();i++)
        {
            if(v[i]>=ans)
            {
                ans=v[i];
                j=i;
            }
        }
        if(x>1)
        {
            ans++;
            if(j==0)
        {
            ans--;
        }
        }
        cout<<ans<<endl;
    }
}

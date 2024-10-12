#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,p,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        string s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>s;
        f=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>n&&s[i]=='R')
            {
                f=1;
                break;
            }
            else if(a[i]<1&&s[i]=='B')
            {
                f=1;
                break;
            }
        }
        vector<ll>red;
        vector<ll>blue;
        for(i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                red.push_back(a[i]);
            }
            else
            {
                blue.push_back(a[i]);
            }
        }
        sort(blue.begin(),blue.end());
        sort(red.begin(),red.end());
        p=1,i=0,j=0;
        while(i<blue.size()&&j<red.size())
        {
            if(p<=blue[i])
            {
                i++;
                p++;
            }
            else if(p>=red[j])
            {
                j++;
                p++;
            }
            else
            {
                f=1;
                break;
            }
        }
        while(i<blue.size())
        {
            if(p>blue[i])
            {
                f=1;
                break;
            }
            i++;
            p++;
        }
         while(j<red.size())
        {
            if(p<red[j])
            {
                f=1;
                break;
            }
            j++;
            p++;
        }
        if(f)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

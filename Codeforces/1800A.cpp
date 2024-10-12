#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    /*cout<<(int)('c')<<endl;
    cout<<(int)('C')<<endl;*/
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        map<char,int>mp;
        string s1="";
        for(i=0;i<n-1;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=(char)(s[i]+32);
            }
            if(s[i+1]>='A'&&s[i+1]<='Z')
            {
                s[i+1]=(char)(s[i+1]+32);
            }
            if(s[i]!=s[i+1])
            {
                if(mp[s[i]])
                {
                    s1+=s[i+1];
                    mp[s[i+1]]++;
                }
                else
                {
                    s1+=s[i];
                    mp[s[i]]++;
                    s1+=s[i+1];
                    mp[s[i+1]]++;
                }
            }
        }
        //cout<<s1<<endl;
        if(s1=="meow")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

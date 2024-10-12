#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,l,r,c,f,p,a,b;
    ///cout<<(int)'A'-64<<endl;
    string s;
    cin>>s;
    n=s.size();
    c=1;
    if(n<26)
    {
        c=0;
    }
    else
    {
        map<char,ll>mp;
        map<char,ll>::iterator it;
        for(i=0; i<26; i++)
        {
            char ch='A'+i;
            mp[ch]=0;
        }
        l=0;
        c=1;
        for(i=0; i+25<n; i++)
        {
            l=0;
            for(j=0;j<26;j++)
            {
                if(s[i+j]=='?')
                {
                    l++;
                }
                else if(mp[s[i+j]]==0)
                {
                    mp[s[i+j]]++;
                    l++;
                }
                else
                {
                    mp.clear();
                    break;
                }
            }
            if(l==26)
            {
                a=i;
                b=a+25;
                break;
            }

        }
        ///cout<<l<<endl;
        ///cout<<a<<" "<<b<<" "<<n<<endl;
        for(i=0; i<26; i++)
        {
            char ch='A'+i;
            if(mp[ch]);
            else
            {
                mp[ch]=0;
            }
        }
        vector<char>rec;
        for(it=mp.begin();it!=mp.end();it++)
        {
            ///cout<<it->first<<" "<<it->second<<endl;
            if((it->second)==0)
            {
                rec.push_back(it->first);
            }
        }
        /*for(i=0;i<rec.size();i++)
        {
            cout<<rec[i]<<" ";
        }*/
        if(l!=26)
        {
            c=0;
        }
        else
        {
            for(i=a,j=0; i<=b; i++)
            {
                if(s[i]=='?')
                {
                    s[i]=rec[j];
                    j++;
                }
            }
            for(i=0; i<n; i++)
            {
                if(s[i]=='?')
                {
                    s[i]='A';
                }
            }
        }
    }
    if(c==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<s<<endl;
    }
}

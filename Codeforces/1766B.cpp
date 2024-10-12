#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,i,c,j,f;
    cin>>t;
    vector<string>v;
    for(char ch1='a'; ch1<='z'; ch1++)
    {
        for(char ch2='a'; ch2<='z'; ch2++)
        {
            string g="";
            g=g+ch1+ch2;
            v.push_back(g);
            g="";
            g=g+ch2+ch1;
            v.push_back(g);
        }
    }
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        f=0;
        for(i=0; i<v.size(); i++)
        {
            c=0;
            for(j=0; j<n-1; j++)
            {
                if(s[j]==v[i][0]&&s[j+1]==v[i][1])
                {
                    c++;
                    j++;
                }
            }
            if(c>=2)
            {
                f=1;
                break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

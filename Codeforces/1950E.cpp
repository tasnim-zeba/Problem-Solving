#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v;
        for(int i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            int x = v[i];
            int f = 0;
            for(int j=x; j<n; j++)
            {
                if(s[j%x]!=s[j])
                {
                    f++;
                }
                if(f>1)
                {
                    break;
                }
            }
            if(f<=1)
            {
                cout<<x<<endl;
                break;
            }
            f=0;
            for(int j=0; j<n-x; j++)
            {
                //cout<<s[j]<<" "<<x<<endl;
                if(s[j]!=s[n-(x-(j%x))])
                {
                    f++;
                }
                if(f>1)
                {
                    //cout<<f<<endl;
                    break;
                }
            }
            if(f<=1)
            {
                cout<<x<<endl;
                break;
            }
        }
    }
}

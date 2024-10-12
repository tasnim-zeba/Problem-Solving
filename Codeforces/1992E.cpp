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
        string s=to_string(n), t="";
        for(int i=1; i<=10; i++)
        {
            t=t+s;
        }

        vector<pair<int,int>>v;
        for(int a=1; a<=10000; a++)
        {
            int len = s.size()*a;
           for(int b=max(1,(len-10)); ; b++)
            {
                if(b==len)break;
                int res = n*a-b;
                string str = to_string(res);
                if(t.substr(0,len-b)==str)
                {
                    v.push_back({a,b});
                }
            }
        }
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
}

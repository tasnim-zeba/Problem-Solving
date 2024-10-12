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
        vector<int>fre(27, 0);
        for(int i=0; i<n; i++)
        {
            fre[s[i]-'a']++;
        }
        vector<pair<int, char>>v;
        for(int i=0; i<27; i++){
                if(fre[i]==0)continue;
            v.push_back({fre[i], 'a' +i});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        string ans(n,'*');
        int j=0;
        for(int i=0; i<v.size(); i++)
        {
            char ch=v[i].second;
            int fr=v[i].first;
            for( ; fr>0 ; j=j+2){
                if(j>=n)j=1;
                ans[j]=ch;
                fr--;
            }
        }
        cout<<ans<<endl;
    }
}

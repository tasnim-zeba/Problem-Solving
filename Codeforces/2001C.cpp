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
        vector<pair<int,int>>v;
        for(int i=2; i<=n; i++)
        {
            int y = 1;
            while(1)
            {
                cout<<'?'<<" "<<i<<" "<<y<<endl;
                int x;
                cin>>x;
                if(x==i){
                    v.push_back({i,y});
                    break;
                }
                y=x;
            }
        }
        cout<<'!'<<" ";
        for(auto ch: v)
        {
            cout<<ch.first<<" "<<ch.second<<" ";
        }
        cout<<endl;
    }
}

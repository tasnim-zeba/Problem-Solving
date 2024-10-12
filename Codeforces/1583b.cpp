#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,a,b,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<int>v;
        v.push_back(0);
        v.push_back(n+1);
        while(m--)
        {
            cin>>a>>b>>c;
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++)
        {
            if((v[i]-v[i-1])>1)
            {
                x=v[i-1]+1;
                break;
            }
        }
        n++;
        while(n--)
        {
            if(n==x||n==0);
            else{
                cout<<n<<" "<<x<<endl;
            }
        }
    }
    return 0;
}

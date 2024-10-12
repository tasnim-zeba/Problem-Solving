#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        long long s=accumulate(v.begin(),v.end(),0);
        ///cout<<s<<endl;
        if(s<n)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<s-n<<endl;
        }
    }
    return 0;
}

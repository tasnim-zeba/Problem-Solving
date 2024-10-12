#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>45)
        {
            cout<<-1<<endl;
        }
        else{
            vector<int>v;
            x=n;
            for(i=9;i>=1;i--)
            {
                if(x>=i)
                {
                    x=x-i;
                    v.push_back(i);
                }
            }
            for(i=v.size()-1;i>=0;i--)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
    }
    return 0;
}

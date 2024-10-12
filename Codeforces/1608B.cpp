#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,a,i,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        if((a+b)>(n-2))
        {
            cout<<-1<<endl;
        }
        else if(abs(a-b)>1)
        {
            cout<<-1<<endl;
        }
        else if(a==0&&b==0)
        {
            for(i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            vector<int>v;
            for(i=1;i<=n;i++)
            {
                v.push_back(i);
            }
            if(a<b)
            {
                i=0;
                while(b--)
                {
                    swap(v[i],v[i+1]);
                    i=i+2;
                }
            }
            else if(a>b){
                i=n-1;
                while(a--)
                {
                    swap(v[i],v[i-1]);
                    i=i-2;
                }
            }
            else{
                i=0;
                while(b--)
                {
                    swap(v[i],v[i+1]);
                    i=i+2;
                }
                    swap(v[n-1],v[n-2]);
            }
            for(i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>x;
        for(i=0;i<n;i++)
        {
            cin>>j;
            x.push_back(j);
        }
        vector<int>y;
        y.push_back(0);
        int ad=0;
        for(i=1;i<n;i++)
        {
            int pre=x[i-1]^y[i-1];
            int curr=x[i];
            ad=0;
            for(j=0;j<30;j++)
            {
                if((1<<j)&pre)
                {
                    if(curr&(1<<j));
                    else
                    {
                        ad=ad|(1<<j);
                    }
                }
            }
            y.push_back(ad);
        }
        for(i=0;i<n;i++)
        {
            cout<<y[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,o,e,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        o=e=0;
        for(i=0;i<2*n;i++)
        {
            cin>>x;
            if(x%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        if(e==o)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}

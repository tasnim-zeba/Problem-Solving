#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j1,j2,mn,mx,c1,c2,c3,l1,l2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int x;
        mn=INT_MAX;
        mx=INT_MIN;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            if(x<mn)
            {
                mn=x;
                j1=i;
            }
            if(x>mx)
            {
                mx=x;
                j2=i;
            }
        }
        l1=min(j2,j1);
        l2=max(j2,j1);
        c1=2+(l1-1)+(n-l2);
        c2=1+(l2-1);
        c3=1+(n-l1);
        ///cout<<c1<<" "<<c2<<" "<<c3<<endl;
        cout<<min(c1,min(c2,c3))<<endl;
    }
    return 0;
}

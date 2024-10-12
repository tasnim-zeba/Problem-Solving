#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,c,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[k+1];
        for(i=0;i<k;i++)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        reverse(a,a+k);
        int cnt=0,c=0;
        for(i=0;i<k;i++)
        {
            if(a[i]>c)
            {
                cnt++;
                int x=n-a[i];
                c=c+x;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

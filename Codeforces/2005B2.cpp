#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, q;
        cin>>n>>m>>q;
        int b[m+1], a[q+1];
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<q; i++)
        {
            cin>>a[i];
        }
        sort(b, b+m);
        for(int i=0; i<q; i++)
        {
            int x = a[i];
            if(x<b[0])
            {
                cout<<b[0]-1<<endl;
                continue;
            }
            else if(x>b[m-1])
            {
                cout<<n-b[m-1]<<endl;
                continue;
            }
            int low = 0, high=m-1, f;
            while(low<=high)
            {
                int mid = low+(high-low)/2;
                if(b[mid]<x)
                {
                    low = mid+1;
                }
                else{
                    f=mid;
                    high = mid-1;
                }
            }
            int y=b[low-1], z=b[low];
            int g = (y+z)/2;
            cout<<min(g-y, z-g)<<endl;
        }
    }
}


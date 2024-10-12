#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  l=1, r=1000;
        int x;
        while(1)
        {
            int mid = (l+r)/2;
            if((r-mid)==1){
                x=mid;
                break;
            }
            cout<<"?"<<" "<<mid<<" "<<r<<endl;
            int x;
            cin>>x;
            int d = (mid+1)*(r+1);
            if(x==d){
                r = mid;
            }
            else{
                l=mid;
            }
        }
        cout<<"! "<<x<<endl;
    }
}

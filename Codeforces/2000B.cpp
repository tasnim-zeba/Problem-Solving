#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        int l,r;
        l=r=a[1];
        int f=1;
        for(int i=2; i<=n; i++)
        {
            if(abs(a[i]-l)==1){
                l=a[i];
            }
            else if(abs(a[i]-r)==1){
                r=a[i];
            }
            else{
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


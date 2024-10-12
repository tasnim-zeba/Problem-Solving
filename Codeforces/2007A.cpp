#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int ans =0;
        for(int i=l; i<=r; ){
            if(i%2==0){
                i++;
            }
            else{
                if((i+2)<=r){
                    ans++;
                    i=i+3;
                }
                else{
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}

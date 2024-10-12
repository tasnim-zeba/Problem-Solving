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
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int f=0;
        for(auto ch: mp){
            if(ch.second%2){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"NO"<<endl;
        }
    }
}

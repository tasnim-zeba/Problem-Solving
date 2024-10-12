#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,a,b;
        cin>>l>>r;
        cin>>a>>b;
        if(r<a || b<l){
            cout<<1<<endl;
        }
        else if(a==l && r==b){
            cout<<r-l<<endl;
        }
        else if(r==a || b==l){
            cout<<2<<endl;
        }
        else if(l<a && a<r && r<b){
            cout<<r-a+2<<endl;
        }
        else if(a<l && l<b && b<r){
            cout<<b-l+2<<endl;
        }
        else if(l<a && a<r && b==r){
            cout<<b-a+1<<endl;
        }
        else if(a<l && l<b && r==b){
            cout<<r-l+1<<endl;
        }
        else if(a==l && b<r){
            cout<<b-a+1<<endl;
        }
        else if(a==l && r<b){
            cout<<r-l+1<<endl;
        }
        else if(l<a && b<r){
            cout<<b-a+2<<endl;
        }
        else if(a<l && r<b){
            cout<<r-l+2<<endl;
        }
        else if(a==l && r==b){
            cout<<r-l<<endl;
        }

    }
}



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a%2){
            cout<<"NO"<<endl;
        }
        else
        {
            if(a%2==0 && b%2==0){
                cout<<"YES"<<endl;
            }
            else if(b%2==1 && a>=2 && a%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}


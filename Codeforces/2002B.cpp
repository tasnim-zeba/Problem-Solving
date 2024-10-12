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
        vector<int>a,b;
        for(int i=0, x; i<n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(int i=0, x; i<n; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        if(a==b){
            cout<<"Bob"<<endl;
        }
        else{
            reverse(a.begin(), a.end());
            if(a==b){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
    }
}


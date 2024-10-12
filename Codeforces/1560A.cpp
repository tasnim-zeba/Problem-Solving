#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<int>v;
    int r,i;
    for(i=1;i<1700;i++)
    {
        r=i%10;
        if(r==3);
        else if(i%3==0);
        else{
            v.push_back(i);
        }
    }
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }*/
    int t,k;
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<v[k-1]<<endl;
    }
    return 0;
}

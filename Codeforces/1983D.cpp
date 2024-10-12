#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
int numberOfInversions(vector<int>&a)
{
    ordered_set s;
    int n = a.size();
    for(int i=0; i<n; i++)
    {
        s.insert(a[i]);
    }
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        cnt = cnt + s.order_of_key(a[i]);//find number of element less than a[i], which must have to swap with a[i] to move forward
        s.erase(a[i]);
    }
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n), b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int cnta = numberOfInversions(a);
        int cntb = numberOfInversions(b);
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a!=b)
        {
            cout<<"NO"<<endl;
        }
        else if(abs(cnta-cntb)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


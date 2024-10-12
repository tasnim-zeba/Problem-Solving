#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,q,k,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>q;
        int a[k+1], b[k+1];
        for(int i=0; i<k; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<k; i++)
        {
            cin>>b[i];
        }
        vector<int>v;
        while(q--)
        {
            cin>>d;
            int low = 0, high = k-1, mx = INT_MIN, idx=-1;
            while(low<=high)
            {
                int mid = low + (high-low)/2;
                if(a[mid]<=d)
                {
                    if(a[mid]>mx){
                        mx = a[mid];
                        idx = mid;
                    }
                    low = mid +1;
                }
                else
                {
                    high = mid -1;
                }
            }
            if(idx==-1)
            {
                double speed = (double)a[0]/b[0];
                v.push_back(((ll)d*b[0])/a[0]);
            }
            else if(a[idx]==d){
                    v.push_back(b[idx]);
            }
            else{
                    int dis = a[idx+1]-a[idx];
                    int time = b[idx+1]-b[idx];
                    int extradis = d-a[idx];
                    int extratime = b[idx] + ((ll)extradis*time)/dis;
                    v.push_back(extratime);
            }
        }
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

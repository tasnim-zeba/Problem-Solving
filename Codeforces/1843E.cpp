#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const  int N=1e5+5;
int b[N],sg_tree[4*N],n,m;
vector<pair<pair<int,int>,int>>v(N);
void build(int node,int st,int en)
{
    if(st==en)
    {
        sg_tree[node]=0;
        return;
    }
    int mid=(st+en)/2;
    build(2*node,st,mid);
    build(2*node+1,mid+1,en);
    sg_tree[node]=sg_tree[2*node]+sg_tree[2*node+1];

}
int query(int node,int st,int en,int l,int r)
{
    if(en<l || st>r)
    {
        return 0;
    }
    if(st>=l&&en<=r)
    {
        return sg_tree[node];
    }
    int mid=(st+en)/2;
    int q1=query(2*node,st,mid,l,r);
    int q2=query(2*node+1,mid+1,en,l,r);
    return q1+q2;
}
void update(int node,int st,int en,int pos,int diff)
{
    if(st>pos || en<pos)return;
    sg_tree[node]+=diff;
    if(st!=en)
    {
        int mid=(st+en)/2;
        update(2*node,st,mid,pos,diff);
        update(2*node+1,mid+1,en,pos,diff);
    }
}
bool ok(int k)
{
    build(1,1,n);
    for(int i=1; i<=k; i++)
    {
        update(1,1,n,b[i],1);
    }
    for(int i=1;i<=m;i++)
    {
        int l=v[i].first.first;
        int r=v[i].first.second;
        int x=v[i].second;
        if(query(1,1,n,l,r)>=x)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    fio
    int t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1; i<=m; i++)
        {
            int l,r,x;
            cin>>l>>r;
            int sz=(r-l)+1;
            if(sz%2==0)
            {
                x=(sz/2)+1;
            }
            else
            {
                x=(sz+1)/2;
            }
            v[i]={{l,r},x};
        }
        int q;
        cin>>q;
        for(i=1; i<=q; i++)
        {
            cin>>b[i];
        }
        int ans=-1;
        int low=1,high=q,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(ok(mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}

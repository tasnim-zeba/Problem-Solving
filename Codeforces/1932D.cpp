#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void findAns(vector<string> &tr, vector<string> &a, vector<string> &b, vector<string> &c, vector<string> &ans)
{
    int k=0, sz = tr.size();
    if(a.size() && a.size()%2==0)
    {
        for(int i=0; i<a.size(); i=i+2)
        {
            ans.push_back(a[i]);
            ans.push_back(a[i+1]);
        }
    }
    else if(a.size())
    {
        for(int i=0; i<a.size()-1; i=i+2)
        {
            ans.push_back(a[i]);
            ans.push_back(a[i+1]);
        }
        if(k<sz)
        {
            ans.push_back(a[a.size()-1]);
            ans.push_back(tr[k]);
            k++;
        }
        else{
            return;
        }
    }
    if(b.size() && b.size()%2==0)
    {
        for(int i=0; i<b.size(); i=i+2)
        {
            ans.push_back(b[i]);
            ans.push_back(b[i+1]);
        }
    }
    else if(b.size())
    {
        for(int i=0; i<b.size()-1; i=i+2)
        {
            ans.push_back(b[i]);
            ans.push_back(b[i+1]);
        }
        if(k<sz)
        {
            ans.push_back(b[b.size()-1]);
            ans.push_back(tr[k]);
            k++;
        }
        else{
            return;
        }
    }
    if(c.size() && c.size()%2==0)
    {
        for(int i=0; i<c.size(); i=i+2)
        {
            ans.push_back(c[i]);
            ans.push_back(c[i+1]);
        }
    }
    else if(c.size())
    {
        for(int i=0; i<c.size()-1; i=i+2)
        {
            ans.push_back(c[i]);
            ans.push_back(c[i+1]);
        }
        if(k<sz)
        {
            ans.push_back(c[c.size()-1]);
            ans.push_back(tr[k]);
            k++;
        }
        else{
            return;
        }
    }
    if((sz-k)%2==0){
        for(int i=k; i<sz; i+=2)
        {
            ans.push_back(tr[i]);
            ans.push_back(tr[i+1]);
        }
    }
    else{
        return;
    }
    return;
}
int main()
{
    /*char ch = '0'+7;
    cout<<ch<<endl;*/
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char trp;
        cin>>trp;
        vector<string>c, d, h, s;
        for(int i=1; i<=2*n; i++)
        {
            string st;
            cin>>st;
            if(st[1]=='C')c.push_back(st);
            else if(st[1]=='D')d.push_back(st);
            else if(st[1]=='H')h.push_back(st);
            else if(st[1]=='S')s.push_back(st);
        }
        if(c.size())sort(c.begin(), c.end());
        if(d.size())sort(d.begin(), d.end());
        if(h.size())sort(h.begin(), h.end());
        if(s.size())sort(s.begin(), s.end());
        vector<string> ans;
        if(trp=='C') findAns(c, d, h, s, ans);
        if(trp=='D') findAns(d, c, h, s, ans);
        if(trp=='H') findAns(h, d, c, s, ans);
        if(trp=='S') findAns(s, d, h, c, ans);
        if(ans.size()==2*n)
        {
            for(int i=0; i<ans.size(); i=i+2)
            {
                cout<<ans[i]<<" "<<ans[i+1]<<endl;
            }
        }
        else{
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
}

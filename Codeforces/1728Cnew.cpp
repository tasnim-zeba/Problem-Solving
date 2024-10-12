#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
    {
        cin>>n;
        priority_queue<int>p,q;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            p.push(x);
        }
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            q.push(x);
        }
        long long ans=0;
        while(p.size())
        {
            if(p.top()==q.top())
            {
                p.pop();
                q.pop();
            }
            else if(p.top()>q.top())
            {
                ans++;
                int y=p.top();
                y=log10(y)+1;
                p.pop();
                p.push(y);
            }
            else
            {
                ans++;
                int y=q.top();
                y=log10(y)+1;
                q.pop();
                q.push(y);
            }
        }
        cout<<ans<<endl;
    }
}

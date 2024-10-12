#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,f,one,h,idx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        vector<pair<int,int>>pr;

        if(s1!=s2)
        {
          f=1;
            for(i=0; i<n; i++)
            {
                if(s1[i]==s2[i])
                {
                    f=0;
                }
            }
            if(f==0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            else
            {
                pr.push_back({1,n});
                for(i=0; i<n; i++)
                {
                    if(s1[i]=='1')s1[i]='0';
                    else s1[i]='1';
                }
            }
        }

         one=0;
        for(i=0; i<n; i++)
        {
            if(s1[i]=='1')one++;
        }
        if(one%2==1)
        {
           h=one-1;
        }
        else
        {
           h=one;
        }
        for(i=0; i<n; i++)
        {
            if(h==0)break;
            if(s1[i]=='1')
            {
               h--;
                pr.push_back({i+1,i+1});
            }
        }

        if(one%2==1)
        {
            if(s1[n-1]=='1')
            {
                pr.push_back({1,n});
                pr.push_back({1,n-1});
            }
            else
            {
                for(i=n-1; i>=0; i--)
                {
                    if(s1[i]=='1')
                    {
                        idx=i+1;
                        break;
                    }
                }
                if(idx==1)
                {
                    pr.push_back({1,n});
                    pr.push_back({2,n});
                }
                else
                {
                    pr.push_back({1,n});
                    pr.push_back({1,idx-1});
                    pr.push_back({1,n});
                    pr.push_back({1,idx});
                }
            }
        }

        cout<<"YES"<<endl;
        cout<<pr.size()<<endl;
        for(i=0; i<pr.size(); i++)
        {
            cout<<pr[i].first<<" "<<pr[i].second<<endl;
        }
    }
    return 0;
}

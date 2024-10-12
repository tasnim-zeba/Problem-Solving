#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        vector<int>v;
        for(i=0; i<n;)
        {
            if((i+2)<n)
            {
                if(s[i]=='o'&&s[i+1]=='n'&&s[i+2]=='e')
                {
                    v.push_back(i+1);
                    i=i+3;
                }
                else if(s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o')
                {
                    if((i+4)<n)
                    {
                        if(s[i]=='t'&&s[i+1]=='w'&&s[i+2]=='o'&&s[i+3]=='n'&&s[i+4]=='e')
                        {
                            v.push_back(i+2);
                            i=i+5;
                        }
                        else
                        {
                            v.push_back(i+1);
                            i=i+3;
                        }
                    }
                    else
                    {
                        v.push_back(i+1);
                        i=i+3;
                    }
                }
                else
                {
                    i++;
                }
            }
             else
                {
                    i++;
                }
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]+1<<" ";
        }
        cout<<endl;
    }
}

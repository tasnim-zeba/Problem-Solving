#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    string s,t;
    cin>>s;
    cin>>t;
    vector<int>v1,v2;
    for(i=0;i<n;i++)
    {
        if(s[i]=='a'&&t[i]=='b')
        {
            v1.push_back(i+1);
        }
        else if(s[i]=='b'&&t[i]=='a')
        {
            v2.push_back(i+1);
        }
    }
    if((v1.size()%2==1&&v2.size()%2==0)||(v1.size()%2==0&&v2.size()%2==1))
    {
        cout<<-1<<endl;
    }
    else if(v1.size()==0&&v2.size()==0)
    {
        cout<<0<<endl;
    }
    else if(v1.size()%2==0&&v2.size()%2==0)
    {
        cout<<v1.size()/2+v2.size()/2<<endl;
        for(i=0;i<v1.size();i=i+2)
        {
            cout<<v1[i]<< " " <<v1[i+1]<<endl;
        }
        for(i=0;i<v2.size();i=i+2)
        {
            cout<<v2[i]<< " " <<v2[i+1]<<endl;
        }
    }
    else if(v1.size()%2==1&&v2.size()%2==1)
    {
        v2.push_back(v1[0]);
        cout<<v1.size()/2+v2.size()/2+1<<endl;
        cout<<v1[0]<< " " <<v1[0]<<endl;
        for(i=1;i<v1.size();i=i+2)
        {
            cout<<v1[i]<< " " <<v1[i+1]<<endl;
        }
        for(i=0;i<v2.size();i=i+2)
        {
            cout<<v2[i]<< " " <<v2[i+1]<<endl;
        }
    }
}

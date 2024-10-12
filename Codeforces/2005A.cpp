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
        if(n<=5)
        {
            if(n==1)cout<<"a"<<endl;
            else if(n==2)cout<<"ae"<<endl;
            else if(n==3)cout<<"aei"<<endl;
            else if(n==4)cout<<"aeio"<<endl;
            else if(n==5)cout<<"aeiou"<<endl;
            continue;
        }
        int d = n/5;
        int r = n%5;
        string s="";
        for(int i=1; i<=d; i++)
        {
            s.push_back('a');
        }
        if(r>=1)
        {
            s.push_back('a');
        }
        for(int i=1; i<=d; i++)
        {
            s.push_back('e');
        }
        if(r>=2)
        {
            s.push_back('e');
        }
        for(int i=1; i<=d; i++)
        {
            s.push_back('i');
        }
        if(r>=3)
        {
            s.push_back('i');
        }
        for(int i=1; i<=d; i++)
        {
            s.push_back('o');
        }
        if(r>=4)
        {
            s.push_back('o');
        }
        for(int i=1; i<=d; i++)
        {
            s.push_back('u');
        }
        cout<<s<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n= s.size();
    int f=1;
    for(int i=1; i<n; i++)
    {
        if(s[i]>='A' && s[i]<='Z');
        else f= 0;
    }
    if(f==0)
    {
        cout<<s<<endl;
    }
    else{
        for(int i=0; i<n; i++)
        {
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] | ' ';
            }
            else{
                s[i] = s[i] & '_';
            }
        }
        cout<<s<<endl;
    }
}

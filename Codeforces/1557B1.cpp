#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<10;i=i+2)
    {
        v.push_back(i);
    }
    int i= find(v.begin(),v.end(),2)-v.begin();
    cout<<i<<endl;
     i= find(v.begin(),v.end(),4)-v.begin();
    cout<<i<<endl;
    i= find(v.begin(),v.end(),8)-v.begin();
    cout<<i<<endl;
    i= find(v.begin(),v.end(),6)-v.begin();
    cout<<i<<endl;
    i= find(v.begin(),v.end(),0)-v.begin();
    cout<<i<<endl;
}

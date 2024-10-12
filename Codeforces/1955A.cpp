#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t, n, a, b;
     cin>>t;
     while(t--)
     {
         cin>>n>>a>>b;
         if(2*a <= b)
         {
             cout<< a*n <<endl;
         }
         else if(n%2)
         {
             cout<< (n/2)*b + a <<endl;
         }
         else
         {
             cout<< (n/2)*b <<endl;
         }
     }
}

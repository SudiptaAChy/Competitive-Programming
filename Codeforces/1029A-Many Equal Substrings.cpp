#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,tmp=0;
    string s;
    cin>>n>>k>>s;
    for(i=0;i<n-1;i++)
    {
        if(s.substr(0,i+1)==s.substr(n-i-1))
            tmp=i+1;
    }
    cout<<s;
    for(i=1;i<k;i++) cout<<s.substr(tmp);
}

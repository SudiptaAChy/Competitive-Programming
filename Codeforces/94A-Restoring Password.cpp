#include<bits/stdc++.h>
using namespace std;
main()
{
    map<string,int>m;
    string s,a,t;
    int i,j,k,l;
    cin>>s;
    for(i=0;i<10;i++)
    {
        cin>>a;
        m[a]=i;
    }
    for(i=0;i<8;i++)
    {
        t=s.substr(i*10,10);
        cout<<m[t];
    }
}

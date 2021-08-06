#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    int sz=s.size(),t=0;
    for(int i=0;i<sz;i++)
    {
        int x=s.find("bear",i);
        if(x!=-1)
            t+=sz-x-4+1;
    }
    cout<<t;
}

#include<bits/stdc++.h>
using namespace std;
main()
{
    string a,b;
    cin>>a>>b;
    int l1=a.size();
    int l2=b.size();
    int t=0;
    for(int i=0;i<=l1-l2;i++)
    {
        if(a.substr(i,l2)==b)
        {
            t++;
            i+=l2-1;
        }
    }
    cout<<t;
}

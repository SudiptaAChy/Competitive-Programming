#include<bits/stdc++.h>
using namespace std;
main()
{
    string a,b,c="";
    cin>>a>>b;
    c=b;
    for(int i=0;i<a.size();i++)
    {
        char ch=min(a[i],c[i]);
        if(ch!=b[i])
        {
            cout<<"-1";
            return 0;
        }
    }
    cout<<c;
}

#include<bits/stdc++.h>
using namespace std;
map<string,string>m;
map<string,int>val;
main()
{
    int n;
    string a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(val[a]==1)
        {
            m[b]=m[a];
            m.erase(a);
            val[b]=1;
        }
        else
        {
            val[b]=1;
            m[b]=a;
        }
    }
    cout<<m.size()<<endl;
    for(auto i:m)
        cout<<i.second<<" "<<i.first<<endl;
}

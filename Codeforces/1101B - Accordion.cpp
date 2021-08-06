#include<bits/stdc++.h>
using namespace std;
string sf(string a,char ch)
{
    int x=a.find(ch);
    if(x==-1)
    {
        cout<<"-1\n";
        exit(0);
    }
    return a.erase(0,x+1);
}
main(void)
{
    int n;
    string s;
    cin>>s;
    s=sf(s,'[');
    s=sf(s,':');
    reverse(s.begin(),s.end());
    s=sf(s,']');
    s=sf(s,':');
    cout<<count(s.begin(),s.end(),'|')+4<<endl;
}

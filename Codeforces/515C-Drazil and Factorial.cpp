#include<bits/stdc++.h>
using namespace std;
bool cmp(char a,char b)
{
    return a-'0'>b-'0';
}
main()
{
    ios_base::sync_with_stdio(false);
    int n;
    string a,s;
    cin>>n>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='2') s+="2";
        if(a[i]=='3') s+="3";
        if(a[i]=='4') s+="322";
        if(a[i]=='5') s+="5";
        if(a[i]=='6') s+="53";
        if(a[i]=='7') s+="7";
        if(a[i]=='8') s+="7222";
        if(a[i]=='9') s+="7332";
    }
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;
}

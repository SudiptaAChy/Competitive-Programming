#include<bits/stdc++.h>
using namespace std;
bool cmp(string a,string b)
{
    return a.size()<b.size();
}
main()
{
    int n,k;
    vector<string>v;
    string s;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    cin>>s;
    int len=s.size(),t1=0,t2=0,time1=0,time2=0;
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)
    {
        if(v[i].size()<len)
        {
            t1++;
        }
        if(v[i].size()==len) t2=i;
        if(v[i].size()>len) break;
    }
    ///cout<<t1<<" "<<t2<<endl;
    time1+=(t1/k)*5+t1+1;
    time2+=(t2/k)*5+t2+1;
    cout<<time1<<" "<<time2;
}

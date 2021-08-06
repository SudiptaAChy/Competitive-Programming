#include <bits/stdc++.h>
#define ll long long
using namespace std;
map<char,int>m;
int main()
{
    int n,k;
    string a;
    cin>>n>>k>>a;
    if(n==k)
    {
        cout<<" ";
        return 0;
    }
    for(auto ch : a)
    {
        m[ch]++;
    }
    for(char i='a';i<='z';i++)
    {
        int x=m[i];
        int y=min(x,k);
        k-=y;
        m[i]-=y;
        if(m[i]<0) m[i]=0;
        if(k==0) break;
    }
    string ans="";
    for(int i=n-1;i>=0;i--)
    {
        char ch=a[i];
        if(m[ch]>0)
        {
            ans+=ch;
            m[ch]--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}


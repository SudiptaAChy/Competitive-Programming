#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000003;
ll bmod(ll a,ll p)
{
    if(p==0) return 1;
    if(p&1)
    {
        return ((a%mod) * (bmod(a,p-1)))%mod;
    }
    else
    {
        ll tmp=bmod(a,p/2);
        return (tmp*tmp)%mod;
    }
}
ll cnvrt(string a)
{
    ll sz=a.size(),sum=0,k=0;
    for(ll i=sz-1;i>=0;i--)
    {
        if(a[i]!='0')
            sum=(sum%mod+((a[i]-'0')*bmod(2,k))%mod)%mod;
        k+=1;
    }
    return sum;
}
int main()
{
    string a,ans="";
    cin>>a;
    ll sz=a.size();
    for(ll i=0;i<sz;i++)
    {
        if(a[i]=='>') ans+="1000";
        else if(a[i]=='<') ans+="1001";
        else if(a[i]=='+') ans+="1010";
        else if(a[i]=='-') ans+="1011";
        else if(a[i]=='.') ans+="1100";
        else if(a[i]==',') ans+="1101";
        else if(a[i]=='[') ans+="1110";
        else if(a[i]==']') ans+="1111";
    }
//    cout<<ans.size()<<endl;
//    cout<<cnvrt(ans)<<endl;
    ll ans1=cnvrt(ans)%mod;
    cout<<ans1;
    return 0;
}

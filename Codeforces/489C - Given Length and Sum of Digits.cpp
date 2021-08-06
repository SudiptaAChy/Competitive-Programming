#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
typedef long long ll;
const ll sz=1234567;
string a,b;
string hmm(string s)
{
    reverse(s.begin(),s.end());
    int tmpi,tmpj;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='0')
        {
            tmpi=i;
            break;
        }
    }
    if(s[0]=='0')
    {
        s[0]++;
        s[tmpi]--;
    }
    return s;
}
int main()
{
    int m,s;
    cin>>m>>s;
    if(s==0)
    {
        if(m==1) puts("0 0");
        else puts("-1 -1");
        return 0;
    }
    for(int i=0;i<m;i++)
    {
        int x=min(s,9);
        b+=x+'0';
        s-=x;
    }
    if(s>0)
    {
        puts("-1 -1");
        return 0;
    }
    a=hmm(b);
    cout<<a<<" "<<b<<endl;
    ///main();
	return 0;
}

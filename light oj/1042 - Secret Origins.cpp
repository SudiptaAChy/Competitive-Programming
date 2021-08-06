#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string cvt(int n)
{
    string a="";
    while(n>0)
    {
        int r=n%2;
        a+=(r+'0');
        n/=2;
    }
    a+="0";
    return a;
}
int cvt1(string a)
{
    int n=a.size();
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=((a[i]-'0')*pow(2,i));
    }
    return total;
}
main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        scanf("%d",&n);
        string s=cvt(n);
        int len=s.size();
        int on=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='1') on++;
            if(s[i]=='1' && s[i+1]=='0')
            {
                swap(s[i],s[i+1]);
                on--;
                for(int j=0;(j<i && on>0);j++)
                {
                    on--;
                    s[j]='1';
                }
                break;
            }
            else s[i]='0';
        }
        printf("Case %d: %d\n",cs,cvt1(s));
    }
}

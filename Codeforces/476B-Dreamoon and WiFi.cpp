#include<bits/stdc++.h>
using namespace std;
main()
{
    string s1,s2;
    int d1=0,d2=0,t=0;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='+') d1++;
        else d1--;
    }
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]=='+') d2++;
        else if(s2[i]=='-') d2--;
        else t++;
    }
    double ans;
    int pw=pow(2,t);
    int dis=d1-d2;
    if(t<abs(dis) || (dis+t)%2!=0)
    {
        ans=(double)0;
        printf("%.9lf",ans);
        return 0;
    }
    int m=(dis+t)/2;
    int x=1;
    for(int i=0;i<m;i++)
        x*=t-i;
    for(int i=2;i<=m;i++) x/=i;
    ans=(double)x/pw;
    printf("%.9lf",ans);
}

#include<bits/stdc++.h>
using namespace std;
/// a=AB b=AC c=BC
double area(double a,double b,double c,double ad)
{
    double ae,ac,de;
    ae=(ad*b)/a;
    de=(ad*c)/a;
    double tri1,tri2,s1,s2,tri;
    s1=(ad+de+ae)/2;
    s2=(a+b+c)/2;
    tri1=sqrt( s1*(s1-ad)*(s1-de)*(s1-ae) );
    tri2=sqrt( s2*(s2-a)*(s2-b)*(s2-c) );
    return tri1/abs(tri2-tri1);
}
double check(double a,double b,double c,double r)
{
    double lo=0,hi=a,mid;
    for(int i=0;i<100;i++)
    {
        mid=(lo+hi)/2;
        if(area(a,b,c,mid)>r)
            hi=mid;
        else
            lo=mid;
    }
    return mid;
}
int main()
{
    int t;
    double a,b,c,r,ans;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&r);
        ans=check(a,b,c,r);
        printf("Case %d: %.11lf\n",cs,ans);
    }
    return 0;
}

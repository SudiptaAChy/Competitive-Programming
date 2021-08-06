#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double cal(double x,double y,double d)
{
    double h1=sqrt((y*y)-(d*d));
    double h2=sqrt((x*x)-(d*d));
    return ((h1*h2)/(h1+h2));
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        double x,y,c;
        scanf("%lf%lf%lf",&x,&y,&c);
        double lo=0,hi=min(x,y),mid;
        int loop=1000;
        while(lo<=hi && loop--)
        {
            mid=(lo+hi)/2.0;
            double ans=cal(x,y,mid);
            if(ans==c)
            {
                break;
            }
            else if(ans<c) hi=mid;
            else lo=mid;
        }
        printf("Case %d: %.11lf\n",cs,mid);
    }
}

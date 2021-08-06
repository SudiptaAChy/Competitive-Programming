#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;
double dis(double x1,double x2,double y1,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
main()
{
    int t,cas,i;
    double ox, oy, ax, ay, bx, by;
    double r,d,angle,ans;
    cin>>t;
    for(cas=1;cas<=t;cas++)
    {
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        r=dis(ox,ax,oy,ay);
        d=dis(ax,bx,ay,by);
        angle=acos((2*r*r-d*d)/(2*r*r));
        ans=r*angle;
        printf("Case %d: %.8lf\n",cas,ans);
    }
}


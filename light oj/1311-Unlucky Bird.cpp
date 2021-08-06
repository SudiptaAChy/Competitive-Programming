#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,cas=1;
    double v1,v2,v3,a1,a2;
    double t1,t2,t3;
    double d1,d2,d3,d;
    cin>>t;
    while(t--)
    {
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;
        t3=max(t1,t2)*v3;
        d1=v1*t1-0.5*a1*t1*t1;
        d2=v2*t2-0.5*a2*t2*t2;
        d3=d1+d2;
        printf("Case %d: %.6lf %.6lf\n",cas++,d3,t3);
    }
}

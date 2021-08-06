#include<bits/stdc++.h>
using namespace std;
main(void)
{
    double r,x1,x2,y1,y2;
    scanf("%lf%lf%lf%lf%lf",&r,&x1,&y1,&x2,&y2);
    double d,n;
    d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    n=ceil(d/(2*r));
    printf("%.0lf",n);
}

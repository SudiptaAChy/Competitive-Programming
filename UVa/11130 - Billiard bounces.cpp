#include<bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;
int main(void)
{
    double a,b,v,A,t;
    while(scanf("%lf %lf %lf %lf %lf",&a,&b,&v,&A,&t) && (a+b+v+A+t)!=0.0)
    {
        double l=(v*t)/2;
        double h=l*cos(A*PI/180);
        double v=l*sin(A*PI/180);
        printf("%.0lf %.0lf\n",h/a,v/b);
    }
    return 0;
}

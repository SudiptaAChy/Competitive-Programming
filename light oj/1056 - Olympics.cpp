#include<bits/stdc++.h>
#define N 1009
#define pb push_back
using namespace std;
typedef long long ll;
void slv()
{
    double a,b;
    char ch;
    cin >> a >> ch >> b;
    double r=sqrt(a*a + b*b)/2.0;
    double angle=acos((r*r+r*r-b*b)/(2.0*r*r));
    double s=r*angle;
    double x=400.0/(2.0*a+2.0*s);
    a *= x;
    b *= x;
    printf("%.10lf %.10lf\n",a,b);
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin >> t;
    for(int cs=1;cs<=t;cs++)
    {
        printf("Case %d: ",cs);
        slv();
    }
    return 0;
}

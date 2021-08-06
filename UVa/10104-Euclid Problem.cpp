#include<bits/stdc++.h>
///#define int long long
using namespace std;
int egcd(int a,int b,int *x,int *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int g=egcd(b%a,a,&x1,&y1);
    *x=y1-(b/a)*x1;
    *y=x1;
    return g;
}
main()
{
    int a,b,x,y,gcd;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        gcd=egcd(a,b,&x,&y);
        printf("%d %d %d\n",x,y,gcd);
    }
}

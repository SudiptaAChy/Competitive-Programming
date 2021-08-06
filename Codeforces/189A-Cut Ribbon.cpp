#include <bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
    int n,i,j,t,mx=0,s=0,ok=0;
    scanf("%d",&n);
    for(i=0;i<3;i++) scanf("%d",&a[i]);
    sort(a,a+3);
    t=n/a[0];
    if(n%a[0]==0)
        printf("%d",t);
    else if(t*a[0]+a[1]==n || t*a[0]+a[2]==n)
        printf("%d",++t);
    else
    {
        for(i=0;i<t;i++)
        {
            j=n-i*a[0];
            if(j%a[1]==0)
            {
                s=i+j/a[1];
                ok=1;
                mx=max(mx,s);
            }
            else if(j%a[2]==0)
            {
                s=i+j/a[2];
                ok=1;
                mx=max(mx,s);
            }
            else
            {
                int sum=a[0]+a[1]+a[2];
                if(n%sum==0)
                {
                    s=3;ok=1;
                }
                mx=max(mx,s);
            }
        } ///end loop of for
        if(ok==0)
            {
                int su1,su2,su3;
                su1=n-a[0]-a[1],su2=n-a[0]-a[2],su3=n-a[1]-a[2];
                if(su1%a[2]==0)
                {
                    s=2+su1/a[2];
                }
                else if(su2%a[1]==0)
                {
                    s=2+su2/a[1];
                }
                else if(su3%a[0]==0)
                {
                    s=2+su3/a[0];
                }
                else
                    s=0;
                mx=max(mx,s);
            }
        printf("%d",mx);
    } ///end loop of else
}

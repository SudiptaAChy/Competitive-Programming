#include<bits/stdc++.h>
using namespace std;
main(void)
{
    double a,b,c,d,e,f,g,h,i,j,n;
    double pnt[10];
    while(scanf("%lf",&n)!=EOF)
    {
        a[0]=n;
        for(i=1;i<8;i++) scanf("%lf",&pnt[i]);
        for(i=0;i<8;i+=2)
        {
            for(j=i+2;j<8;j+=2)
            {
                if(pnt[i]==pnt[j] && pnt[i+1]==pnt[j+1])
                    break;
            }
        }
    }
}

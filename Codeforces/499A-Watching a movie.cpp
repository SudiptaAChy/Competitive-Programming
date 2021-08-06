#include<bits/stdc++.h>
using namespace std;
int a[1000009];
main(void)
{
    int n,x,s=0,t,l,r;
    int st=1;
    scanf("%d%d",&n,&x);
    while(n--)
    {
        scanf("%d%d",&l,&r);
        if(st+x<=l)
        {
            t=l-st;
            t/=x;
            st=st+t*x;
            s+=r-st+1;
        }
        else
        {
            s+=r-st+1;
        }
        st=r+1;
    }
    printf("%d",s);
}

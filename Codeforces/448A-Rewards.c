#include<stdio.h>
#include<math.h>
main(void)
{
    int a1,a2,a3,b1,b2,b3,n;
    int s=0;

    scanf("%d%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3,&n);

    s+=ceil((a1+a2+a3)*1.0/5);
    s+=ceil((b1+b2+b3)*1.0/10);

    if(s<=n) printf("YES");
    else printf("NO");
}

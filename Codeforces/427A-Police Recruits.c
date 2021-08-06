#include<stdio.h>
main(void)
{
    int n,i,a,pre=-1,total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==-1)
        {
            if(pre<=0)
            {
                total++;
                pre=a;
            }
            if(pre>=1)
            {
                pre-=1;
            }
        }
        if(a>0)
        {
            pre+=a;
        }

    }
    printf("%d",total);
}

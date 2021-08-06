#include<stdio.h>
main(void)
{
    int t,i;
    int a , b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }
}

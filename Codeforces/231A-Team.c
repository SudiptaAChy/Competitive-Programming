#include<stdio.h>
main(void)
{
    int n,p,v,t,i;
    int count;
    scanf("%d",&n);
    count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&p,&v,&t);
        if(p==1 && v==1 || p==1 && t==1 || v==1 && t==1)
        {
            count+=1;
        }
    }
    printf("%d\n",count);
}

#include<stdio.h>
main(void)
{
    int n,i,c=0,h;
    scanf("%d %d",&n,&h);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=h)
            c+=1;
        else
            c+=2;
    }
    printf("%d",c);
}

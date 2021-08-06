#include<stdio.h>
main(void)
{
    int n,m,c,cm=0,i,cc=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&m,&c);
        if(m>c)
            cm++;
        if(c>m)
            cc++;
    }
    if(cm>cc)
        printf("Mishka");
    else if(cc>cm)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
}

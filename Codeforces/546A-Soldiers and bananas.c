#include<stdio.h>
main()
{
    int i,n,w,k;
    int land,tk=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        tk=tk+i*k;
    }
    if(tk>=n)
        land=tk-n;
    else
        land=0;
    printf("%d\n",land);
}

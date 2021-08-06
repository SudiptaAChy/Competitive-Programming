#include<stdio.h>
main()
{
    int n;
    int i,j,k=0;
    int count=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&j);
        if((j-k)!=0)
            count++;
        k=j;
    }
    printf("%d",count);
}

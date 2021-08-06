#include<stdio.h>
main()
{
    char a[100];
    int n,i,j,count=0;

    scanf("%d",&n);
    getchar();

    for(i=0;i<n;i++)
        scanf("%c",&a[i]);

    for(i=0;i<n;i++)
    {
        j=i+1;
        if(a[i]==a[j])
            count++;
    }

    printf("%d",count);
}

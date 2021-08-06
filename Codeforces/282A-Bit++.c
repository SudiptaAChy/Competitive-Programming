#include<stdio.h>
#include<string.h>
main()
{
    char a[4];
    int n,i,len,total=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a);
        if(a[1]=='+')
            total++;
        if(a[1]=='-')
            total--;
    }
    printf("%d",total);
}

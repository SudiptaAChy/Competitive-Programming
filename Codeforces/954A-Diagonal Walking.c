#include<stdio.h>
#include<string.h>
main()
{
    int n,l,count=0,i;
    char a[100];
    scanf("%d",&n);
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l; )
    {
        if(a[i]=='R' && a[i+1]=='U' || a[i]=='U' && a[i+1]=='R')
        {
            count=count+1;
            i=i+2;
        }
        else
        {
            count=count;
            i=i+1;
        }
    }
    printf("%d\n",n-count);
}

#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    int l,i,n,j;
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i+=2)
    {
        for(j=i+2;j<l;j+=2)
        if(a[j]<a[i])
        {
            n=a[j];
            a[j]=a[i];
            a[i]=n;
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
}

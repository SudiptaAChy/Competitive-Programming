#include<stdio.h>
main()
{
    char a[100000],b[100000];
    gets(a);
    int i,k=0,j,l=0;
    for(i=0;a[i];i++)
    {
        if(a[i]!='{' && a[i]!=',' && a[i]!='}' && a[i]!=' ')
            b[k++]=a[i];
    }
    for(i=0;b[i];i++)
    {
        for(j=i+1;b[j];j++)
        {
            if(b[i]==b[j])
                b[j]='1';
        }
    }
    for(i=0;b[i];i++)
        if(b[i]!='1')
            l++;
    printf("%d",l);
}

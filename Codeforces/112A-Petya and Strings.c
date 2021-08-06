#include<stdio.h>
#include<string.h>
main()
{
    char a[101],b[101];
    int i,j,l,same=0,not;
    scanf("%s %s",&a,&b);

    l=strlen(a);

    for(i=0;i<l;i++)
        a[i]=tolower(a[i]);
    for(j=0;j<l;j++)
        b[j]=tolower(b[j]);

    not=0;

    for(i=0,j=0;i<l,j<l;i++,j++)
    {
        if(a[i]==b[j])
            same++;
        if(a[i]<b[j])
        {
            printf("-1\n");
            not++;
            break;
        }
        if(a[i]>b[j])
        {
            printf("1\n");
            not++;
            break;
        }
    }
    if(same>0 && not==0)
        printf("0\n");
}


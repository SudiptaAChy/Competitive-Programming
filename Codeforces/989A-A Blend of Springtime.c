#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(void)
{
    char a[1001];
    int i,l;

    scanf("%s",a);
    l=strlen(a);
    for(i=1;i<l-1;i++)
    {
        if(a[i]!='.' && a[i-1]!='.' && a[i+1]!='.' && a[i]!=a[i-1] && a[i]!=a[i+1] && a[i-1]!=a[i+1])
        {
            printf("YES");
            exit(0);
        }
    }
    printf("NO");
}

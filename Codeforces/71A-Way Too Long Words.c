#include<stdio.h>
#include<string.h>
main()
{
    int t,j,i,length;
    char a[1000];
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%s",&a);
        length=strlen(a);
        if(length<=10)
            printf("%s\n",a);
        else
        {
            printf("%c%d%c\n",a[0],length-2,a[length-1]);
        }
    }
}

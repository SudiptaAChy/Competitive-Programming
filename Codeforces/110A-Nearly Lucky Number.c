#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    int i,count,length;
    scanf("%s",&a);
    length=strlen(a);
    count=0;
    for(i=0;i<length;i++)
    {
        if(a[i]=='4' || a[i]=='7')
            count++;
        else
            count=count;
    }
    if(count==4 || count==7)
        printf("YES\n");
    else
        printf("NO\n");
}

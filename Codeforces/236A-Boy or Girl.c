#include<stdio.h>
#include<string.h>
main()
{
    char a[1000];
    int l,i,j,k;
    int d,count=0;

    scanf("%s",&a);
    l=strlen(a);

    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
             {
                 count++;
                 break;
            }
        }
    }
    d=l-count;

    if(d%2==0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
}

#include<stdio.h>
#include<string.h>
main(void)
{
    char line[100];
    int i,l,change=0;

    scanf("%s",line);
    l=strlen(line);

    for(i=1;i<l;i++)
        if(line[i]>='a')
             change=1;

    if(change==0)
    {
        for(i=0;i<l;i++)
        {
            if(line[i]>='a')
            {
                line[i]=line[i]-32;
            }
            else
            {
                line[i]=line[i]+32;
            }
        }
    }
    printf("%s",line);
}

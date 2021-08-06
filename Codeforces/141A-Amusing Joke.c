#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(void)
{
    char name[1000],add[100],pile[300];
    scanf("%s %s %s",name,add,pile);
    int i,j,k,l,y;
    strcat(name,add);
    if(strlen(name)!=strlen(pile))
    {
        printf("NO");
        exit(0);
    }
    for(i=0;name[i];i++)
    {
        y=0;
        for(k=0;pile[k];k++)
        {
            if(name[i]==pile[k])
            {
                y=1;
                pile[k]=-1;
                break;
            }
        }
        if(y==0)
        {
            printf("NO");
            exit(0);
        }
    }
    printf("YES");
}

#include<stdio.h>
#include<string.h>
main(void)
{
    char bar[1000],bri[1000];

    scanf("%s",&*bar);
    scanf("%s",&bri);

    if(strcmp(strrev(bar),bri)==0)
        printf("YES\n");
    else
        printf("NO\n");
}

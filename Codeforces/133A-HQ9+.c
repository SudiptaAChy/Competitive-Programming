#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    char b[]="HQ9";
    int i,j,c=0;

    scanf("%s",&a);

    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i]==b[j])
                c++;
        }
    }
    if(c>0)
        printf("YES");
    else
        printf("NO");
}

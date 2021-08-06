#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    char b[]="hello";
    int i,j,c;

    scanf("%s",&a);

    j=0;
    c=0;

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[j]){
            j++;
            c++;
        }
    }
    if(c==5)
        printf("YES");
    else
        printf("NO");
}

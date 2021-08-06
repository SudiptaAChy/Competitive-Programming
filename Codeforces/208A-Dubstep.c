#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[250];
    char b[]="WUB";
    int i,j,m=0;

    scanf("%s",&a);

    j=0;

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==b[j] && a[i+1]==b[j+1] && a[i+2]==b[j+2]){
            printf(" ");
            i+=2;
        }
        else
            printf("%c",a[i]);
    }

    return 0;
}

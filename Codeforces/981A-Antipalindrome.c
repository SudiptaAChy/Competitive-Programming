#include<stdio.h>
#include<string.h>
int main(void)
{
    char a[100],b[100];
    int i,j,k,l,same=1;
    scanf("%s",a);
    strcpy(b,a);
    strrev(a);
    l=strlen(a);
    if(strcmp(a,b)!=0)
        printf("%d",l);
    else
    {
        for(i=1;i<l;i++)
        {
            if(b[0]!=b[i])
            {
                same=0;
                break;
            }
        }
        if(same==1) printf("0");
        else printf("%d",l-1);
    }
}

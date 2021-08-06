#include<stdio.h>
#include<string.h>
int year(char x[],int y)
{
    int i;
    int v=0;
    int l=strlen(x);
    for(i=0;i<l;i++)
    {
        v=((v*10)+(x[i]-'0'))%y;
    }
    if(v==0)
        return 0;
    else
        return 1;
}
int main(void)
{
    char y[100000];
    int count=0,space=0;
    while(scanf("%s",y)!=EOF)
    {
        if(space>0)
            printf("\n");
        space++;
        int c=0;
        if(year(y,400)==0 || year(y,4)==0 && year(y,100)==1)
        {
            c=1;
            printf("This is leap year.\n");
            if(year(y,15)==0)
            {
                printf("This is huluculu festival year.\n");
            }
            if(year(y,55)==0)
            {
                printf("This is bulukulu festival year.\n");
            }
        }
        else
        {
            if(year(y,15)==0)
            {
                c=1;
                printf("This is huluculu festival year.\n");
            }
        }
        if(c==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}


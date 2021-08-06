#include<stdio.h>
#include<stdlib.h>
char a[1009];
int word(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 0;
    else
        return 1;
}
int main(void)
{
    int i,j,k,l;
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        if(word(a[i])!=0) ///consonant
        {
            if(a[i]=='n')
                continue;
            else
            {
                if(word(a[i+1])!=0)
                {
                    printf("NO");
                    exit(0);
                }
            }
        }
    }
    printf("YES");
    return 0;
}

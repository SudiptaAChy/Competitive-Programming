#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char c;
    while((c=getchar())!='\n')
    {
        c=tolower(c);
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y')
            printf(".%c",c);
    }
}

#include<bits/stdc++.h>
using namespace std;
char a[1000009];
main(void)
{
    int frst=1,scnd=0;
    while(gets(a))
    {
        for(int i=0;a[i];i++)
        {
            if(a[i]=='"')
            {
                if(frst==1 && scnd==0)
                {
                    printf("``");
                    frst=0,scnd=1;
                }
                else
                {
                    printf("''");
                    frst=1;scnd=0;
                }
            }
            else
                printf("%c",a[i]);
        }
        printf("\n");
    }
}

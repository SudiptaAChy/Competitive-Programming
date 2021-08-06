#include<stdio.h>
#include<string.h>
main()
{
    int n,i,j,p=0;
    scanf("%d",&n);
    char a[n][100],s[100];
    int b[100000]={0}; //rank
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        for(j=0;j<p;j++)
        {
            if(strcmp(s,a[j])==0)
            {

                b[j]++;
                printf("%s%d\n",s,b[j]);

                break;
            }
        }
        strcpy(a[j],s);
        if(j==p)
        {
            printf("OK\n");
            p++;
        }
    }
}

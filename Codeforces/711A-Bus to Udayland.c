#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    char a[n][5];
    int i,j,k,l,yes=0;
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i][0]=='O' && a[i][1]=='O')
        {
            printf("YES\n");
            yes=1;
            a[i][0]='+',a[i][1]='+';
            break;
        }
        if(a[i][3]=='O' && a[i][4]=='O')
        {
            printf("YES\n");
            yes=1;
            a[i][3]='+',a[i][4]='+';
            break;
        }
    }
    if(yes==0)
        printf("NO");
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
                printf("%c",a[i][j]);
            printf("\n");
        }
    }
}

#include<stdio.h>
main(void)
{
    int k;
    int x,y,m,n;

    while(1)
    {
        scanf("%d",&k);

        if(k==0) break;

        scanf("%d%d",&m,&n);
        while(k--)
        {
            scanf("%d%d",&x,&y);
            if(x==m || y==n) printf("divisa\n");
            else if(x>m && y>n) printf("NE\n");
            else if(x<m && y>n) printf("NO\n");
            else if(x<m && y<n) printf("SO\n");
            else printf("SE\n");
        }
    }
}

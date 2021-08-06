#include<stdio.h>
#include<string.h>
int main(void)
{
    int n,i,j,k,l;
    scanf("%d",&n);
    char a[n][1000],b[n][1000];
    for(i=0;i<n;i++) scanf("%s",&a[i]);

    if(n==1)
    {
        printf("YES\n");
        printf("%s",a[0]);exit(0);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(a[i])>strlen(a[j]))
            {
                strcpy(b[i],a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],b[i]);
            }
        }
    }
    int ok=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strstr(a[j],a[i])!=0)
            {
                ok=1;
            }
            else
            {
                ok=0;break;
            }
        }
        if(ok==0) break;
    }
    if(ok==0) printf("NO");
    else
    {
        printf("YES\n");
        for(i=0;i<n;i++) printf("%s\n",a[i]);
    }

    return 0;
}


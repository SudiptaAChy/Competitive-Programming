#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int a[100000],team[100000];

int main(void)
{
    int n,k,i,j,l,m;
    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++) scanf("%d",&a[i]);

    m=0,l=0;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                a[j]=-1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            l++;
            team[m++]=i+1;
        }
    }
    if(l<k)
    {
        printf("NO");
        exit(0);
    }
    printf("YES\n");
    for(m=0;m<k;m++) printf("%d ",team[m]);

    return 0;
}

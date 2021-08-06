#include<bits/stdc++.h>
using namespace std;
int a[1000009],b[1000009];
main(void)
{
    int n,i,j,k,pos,s;
    scanf("%d",&n);
    pos=n,k=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==n) s=0;
    for(i=pos;i<n;i++)
    {
        b[k++]=a[i];
    }
    for(i=0;i<pos;i++)
        b[k++]=a[i];
    for(i=0;i<k-1;i++)
    {
        if(b[i]>b[i+1])
        {
            printf("-1");
            return 0;
        }
    }
    s=n-pos;
    printf("%d",s);
}

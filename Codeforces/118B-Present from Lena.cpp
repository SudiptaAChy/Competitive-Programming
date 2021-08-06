#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
            printf("  ");
        for(j=0;j<=i;j++)
        {
            if(i!=0)
            printf("%d ",j);
            else
            printf("%d",j);
        }
        for(l=i-1;l>0;l--)
        {
            printf("%d ",l);
        }
        if(l>-1 && i!=0)
            printf("%d",l--);
        cout<<endl;
    }
    for(i=n-1;i>=0;i--)
    {
        for(k=1;k<=n-i;k++)
            printf("  ");
        for(j=0;j<=i;j++)
        {
            if(i!=0)
            printf("%d ",j);
            else
            printf("%d",j);
        }
        for(l=i-1;l>0;l--)
            printf("%d ",l);
        if(l>-1 && i!=0)
        printf("%d",l--);
        cout<<endl;
    }
}

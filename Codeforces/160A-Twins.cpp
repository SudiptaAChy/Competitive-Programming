#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,i,j,total=0,sum=0,s=0;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sort(a,a+n);
    int hi=n-1;
    while(s<=sum)
    {
        sum-=a[hi];
        s+=a[hi];
        total++;
        hi--;
    }
    printf("%d",total);
    return 0;
}

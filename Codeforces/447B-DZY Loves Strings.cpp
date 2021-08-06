#include<bits/stdc++.h>
using namespace std;
char s[10009];
main(void)
{
    int i,j,k,v1=0,v2=0,d;
    int a[26];
    scanf("%s%d",s,&k);
    for(i=0;i<26;i++) scanf("%d",&a[i]);
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        d=s[i]-97;
        v1+=a[d]*(i+1);
    }
    sort(a,a+26);
    for(i=l+1;i<=l+k;i++)
        v1+=i*a[25];
    printf("%d",v1);
}

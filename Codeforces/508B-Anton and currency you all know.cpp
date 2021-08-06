#include<bits/stdc++.h>
using namespace std;
char a[1000009];
int d[20];
main(void)
{
    int i,j,od=0,ev=0,mi=1000009,ein,k,val;
    scanf("%s",a);
    int l=strlen(a);
    val=a[l-1]-'0';
    for(i=0;a[i];i++)
    {
        j=a[i]-'0';
        d[j]++;
        if(j%2==0)
        {
            ev++;
            if(j<val)
            {
                ein=i;
                break;
            }
            else
            {
                ein=i;
            }
        }
    }
    if(ev==0)
    {
        printf("-1");return 0;
    }
    swap(a[l-1],a[ein]);
    printf("%s",a);
}

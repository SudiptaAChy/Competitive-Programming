#include<bits/stdc++.h>
using namespace std;
char a[10009],b[10009];
int c[10009];
void rev(char *ch,int len)
{
    int i;
    for(i=0;i<len/2;i++)
    {
        swap(*(ch+i),*(ch+len-1-i));
    }
}
main(void)
{
    int i,j,k,l1,l2,ca,val;
    char *p,*q;
    while(scanf("%s",a)!=EOF)
    {
        scanf("%s",b);
        memset(c,0,sizeof(c));
        l1=strlen(a),l2=strlen(b);
        p=&a[0];
        rev(p,l1);
        q=&b[0];
        rev(q,l2);
        for(i=0;i<l1;i++)
        {
            for(j=0;j<l2;j++)
            {
                c[i+j]+=(a[i]-'0')*(b[j]-'0');
            }
        }
        for(i=0;i<10009;i++)
        {
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
        int fz=0;
        for(i=10009;i>=0;i--)
        {
            if(c[i]==0)
            {
                if(fz==1)
                {
                    printf("%d",c[i]);
                }
            }
            else
            {
                printf("%d",c[i]);
                fz=1;
            }
        }
        if(fz==0)
            printf("0");
        printf("\n");
    }
}

#include<stdio.h>
#include<string.h>
void jog(char a[],char b[])
{
    int l1,l2,i,j,ca=0;
    int fol,firstzero=0,sum;

    l1=strlen(a),l2=strlen(b);

    if(l1==l2)
    {
        for(i=l1-1,j=l2-1;i>=0,j>=0;i--,j--)
        {
            fol=(a[i]-'0')+(b[j]-'0')+ca;
            sum=fol%10;
            if(sum==0)
            {
                if(firstzero!=0)
                    printf("%d",sum);
            }
            else
            {
                firstzero++;
                printf("%d",sum);
            }
            ca=fol/10;
        }
        if(ca!=0)
        {
            printf("%d",ca);
        }
    }
    else if(l1>l2)
    {
        for(i=l1-1,j=l2-1;i>=l1-l2,j>=0;i--,j--)
        {
            fol=(a[i]-'0')+(b[j]-'0')+ca;
            sum=fol%10;
            if(sum==0)
            {
                if(firstzero!=0)
                    printf("%d",sum);
            }
            else
            {
                firstzero++;
                printf("%d",sum);
            }
            ca=fol/10;
        }
        for(i=l1-l2-1;i>=0;i--)
        {
            fol=ca+(a[i]-'0');
            sum=fol%10;
            if(sum==0)
            {
                if(firstzero!=0)
                    printf("%d",sum);
            }
            else
            {
                firstzero++;
                printf("%d",sum);
            }
            ca=fol/10;
        }
        if(ca!=0)
            printf("%d",ca);
    }
    else
    {
        for(i=l1-1,j=l2-1;i>=0,j>=l2-l1;i--,j--)
        {
            fol=(a[i]-'0')+(b[j]-'0')+ca;
            sum=fol%10;
            if(sum==0)
            {
                if(firstzero!=0)
                    printf("%d",sum);
            }
            else
            {
                firstzero++;
                printf("%d",sum);
            }
            ca=fol/10;
        }
        for(j=l2-l1-1;j>=0;j--)
        {
            fol=ca+(b[j]-'0');
            sum=fol%10;
            if(sum==0)
            {
                if(firstzero!=0)
                    printf("%d",sum);
            }
            else
            {
                firstzero++;
                printf("%d",sum);
            }
            ca=fol/10;
        }
        if(ca!=0)
            printf("%d",ca);
    }
}
void rev(int l,char *p)
{
    int i,j,lim=l-1;
    char ch;
    for(i=0;i<=lim/2;i++)
    {
        ch=*(p+i);
        *(p+i)=*(p+lim-i);
        *(p+lim-i)=ch;
    }
}
int main(void)
{
    char n1[1000009],n2[1000009];
    char *f1,*f2;
    int t,l1,l2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%s",n1,n2);
        f1=n1,f2=n2;
        l1=strlen(n1),l2=strlen(n2);
        rev(l1,n1);
        rev(l2,n2);
        jog(n1,n2);
        puts("");
    }
    return 0;
}

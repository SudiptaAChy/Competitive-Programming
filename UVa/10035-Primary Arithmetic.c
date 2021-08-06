#include<stdio.h>
#include<string.h>
main(void)
{
    char a[1000],b[1000];
    int t,ca,i,j,l1,l2;

    while(1)
    {
        t=0,ca=0;
        scanf("%s %s",a,b);
        l1=strlen(a),l2=strlen(b);
        if(a[0]=='0' && b[0]=='0')
            break;
        if(l1==l2)
        {
            for(i=l1-1,j=l2-1;i>=0,j>=0;i--,j--)
            {
                ca+=(a[i]-'0')+(b[j]-'0');
                if(ca>9)
                {
                    t++;
                    ca/=10;
                }
                else
                    ca=0;
            }
        }
        else if(strlen(a)<strlen(b))
        {
            for(i=l1-1,j=l2-1;i>=0,j>=l2-l1;i--,j--)
            {
                ca+=(a[i]-'0')+(b[j]-'0');
                if(ca>9)
                {
                    t++;
                    ca/=10;
                }
                 else
                    ca=0;
            }
            for(i=l2-l1-1;i>=0;i--)
            {
                ca+=b[i]-'0';
                if(ca>9)
                {
                    t++;
                    ca/=10;
                }
                 else
                    ca=0;
            }
        }
        else
        {
            for(i=l1-1,j=l2-1;i>=l1-l2,j>=0;i--,j--)
            {
                ca+=(a[i]-'0')+(b[j]-'0');
                if(ca>9)
                {
                    t++;
                    ca/=10;
                }
                 else
                    ca=0;
            }
            for(i=l1-l2-1;i>=0;i--)
            {
                ca+=a[i]-'0';
                if(ca>9)
                {
                    t++;
                    ca/=10;
                }
                 else
                    ca=0;
            }
        }
        if(t==0) printf("No carry operation.\n");
        else if(t==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",t);
    }
}

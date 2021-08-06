#include<stdio.h>
main(void)
{
    int i,j,k,l,m,n;
    char direc[100],mess[200],orig[200];
    char k1[100]={'q','w','e','r','t','y','u','i','o','p'};
    char k2[100]={'a','s','d','f','g','h','j','k','l',';'};
    char k3[100]={'z','x','c','v','b','n','m',',','.','/'};

    scanf("%s",direc);
    scanf("%s",mess);

    i=0;
    k=0;

    if(direc[0]=='R')
    {
        for(i=0;mess[i];i++)
        {
            for(j=0,m=0,l=0;k1[j],k2[m],k3[l];j++,m++,l++)
            {
                if(mess[i]==k1[j])
                {
                    orig[k++]=k1[j-1];
                    break;
                }
                if(mess[i]==k2[m])
                {
                    orig[k++]=k2[m-1];
                    break;
                }
                if(mess[i]==k3[l])
                {
                    orig[k++]=k3[l-1];
                    break;
                }
            }
        }
    }
    else
    {
        for(i=0;mess[i];i++)
        {
            for(j=0,m=0,l=0;k1[j],k2[m],k3[l];j++,m++,l++)
            {
                if(mess[i]==k1[j])
                {
                    orig[k++]=k1[j+1];
                    break;
                }
                if(mess[i]==k2[m])
                {
                    orig[k++]=k2[m+1];
                    break;
                }
                if(mess[i]==k3[l])
                {
                    orig[k++]=k3[l+1];
                    break;
                }
            }
        }
    }
    orig[k++]='\0';
    for(k=0;orig[k];k++)
        printf("%c",orig[k]);
}

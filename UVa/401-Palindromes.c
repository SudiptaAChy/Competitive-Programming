#include<stdio.h>
#include<string.h>
main()
{
    char a[10009];
    int i,k,len,mirror,pallin,mipallin;
    int e,three,l,j,s,two,z,five;

    while(scanf("%s",a)!=EOF)
    {
        mirror=0,pallin=0,mipallin=0;
        e=0,three=0,l=0,j=0,s=0,two=0,z=0,five=0;

        len=strlen(a)-1;

        for(i=0;i<=len;i++)
        {
            if(a[i]!=a[len-i])
            {
                pallin=1;
                break;
            }
        }
        for(i=0;i<=len;i++)
        {
            if(a[i]=='0' || a[i]=='1' || a[i]=='8' || a[i]=='A' || a[i]=='H' || a[i]=='I' || a[i]=='M' || a[i]=='O' || a[i]=='T' || a[i]=='U' || a[i]=='V' || a[i]=='W' || a[i]=='X' || a[i]=='Y')
                mirror=0;
            else if(a[i]=='E')
                e+=1;
            else if(a[i]=='3')
                three+=1;
            else if(a[i]=='L')
                l+=1;
            else if(a[i]=='J')
                j+=1;
            else if(a[i]=='S')
                s+=1;
            else if(a[i]=='2')
                two+=1;
            else if(a[i]=='Z')
                z+=1;
            else if(a[i]=='5')
                five+=1;
            else
            {
                mirror=1;
                break;
            }
        }
        printf("%s -- ",a);
        if(e!=three || l!=j || s!=two || z!=five)
            mirror=1;
        if(pallin==0 && mirror==1)
            printf("is a regular palindrome.\n");
        else if(mirror==0 && pallin==1)
            printf("is a mirrored string.\n");
        else if(pallin==0 && mirror==0)
            printf("is a mirrored palindrome.\n");
        else
            printf("is not a palindrome.\n");

        puts("");
    }
}

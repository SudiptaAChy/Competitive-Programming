#include<stdio.h>
main()
{
    int n,i,ca=0,cd=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        if(a[i]=='A')
            ca++;
        else
            cd++;
    }
    if(ca>cd)
        printf("Anton");
    else if(cd>ca) printf("Danik");
    else printf("Friendship");
}

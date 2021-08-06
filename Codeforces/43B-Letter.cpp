#include<bits/stdc++.h>
using namespace std;
char a[100009],b[100009];
int s[200],s1[200];
main(void)
{
    int i,j,k,n;
    gets(a);
    gets(b);
    for(i=0;a[i];i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            n=a[i]-64;
            s[n]++;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            n=a[i]-96;
            s1[n]++;
        }
    }
    for(i=0;b[i];i++)
    {
        if(b[i]!=' ')
        {
            if(b[i]>='A' && b[i]<='Z')
            {
                n=b[i]-64;
                if(s[n]>0)
                    s[n]--;
                else
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else if(b[i]>='a' && b[i]<='z')
            {
                n=b[i]-96;
                if(s1[n]>0)
                    s1[n]--;
                else
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
}

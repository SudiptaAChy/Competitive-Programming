#include<bits/stdc++.h>
using namespace std;
char s[1000009],t[1000009],ch;
int a[1009]={0};
main(void)
{
    int y=0,w=0,i,n,l;
    cin>>s>>t;
    l=strlen(s);
    for(i=0;t[i];i++)
    {
        n=t[i];
        a[n]++;
    } ///keeping value in a[]
    for(i=0;s[i];i++)
    {
        n=s[i];
        if(a[n]>0)
        {
            y++;
            a[n]--;
        }
        else
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                n=s[i]+32;
            }
            else
            {
                n=s[i]-32;
            }
            if(a[n]>0)
            {
                w++;
                a[n]--;
            }
        }
    }
    cout<<y<<" "<<w<<endl;
}

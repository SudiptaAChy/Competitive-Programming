#include<bits/stdc++.h>
using namespace std;
char a[100009];
main()
{
    string s;
    int i,j,k,l;
    while(1)
    {
        getline(cin,s);
        j=0;
        if(s=="DONE")
            break;
        for(i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
            {
                if(s[i]>='A' && s[i]<='Z')
                {
                    a[j++]=s[i]+32;
                }
                else
                    a[j++]=s[i];
            }
        }
        a[j]='\0';
        l=strlen(a);
        for(i=0;i<l/2;i++)
        {
            if(a[i]!=a[l-i-1])
                break;
        }
        if(i==l/2)
        cout<<"You won't be eaten!"<<endl;
        else cout<<"Uh oh.."<<endl;
    }
}

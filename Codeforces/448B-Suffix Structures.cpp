#include<bits/stdc++.h>
using namespace std;
main()
{
    char s[1000],t[1000];
    int i,j,aut=0,arr=0,l1,l2;
    int a[40]={0},b[40]={0};
    cin>>s>>t;
    l1=strlen(s),l2=strlen(t);
    if(l1==l2)
    {
        sort(s,s+l1),sort(t,t+l2);
        if(strcmp(s,t)==0)
            cout<<"array";
        else
            cout<<"need tree";
    }
    else if(l1>l2)
    {
        for(i=0;s[i];i++)
            a[s[i]-96]++;
        for(i=0;t[i];i++)
            b[t[i]-96]++;
        for(i=0;i<30;i++)
        {
            if(a[i]==b[i])
                aut=1;
            else if(a[i]<b[i])
            {
                cout<<"need tree";
                return 0;
            }
        }
        int pos=0;
        for(i=0;s[i];i++)
        {
            if(s[i]==t[pos])
                pos++;
        }
        if(pos<l2)
            arr=1;
        if(aut==1 && arr==1)
            cout<<"both";
        else if(aut==1)
            cout<<"automaton";
        else if(arr=1)
            cout<<"array";
        else
            cout<<"need tree";
    }
    else
        cout<<"need tree";
}

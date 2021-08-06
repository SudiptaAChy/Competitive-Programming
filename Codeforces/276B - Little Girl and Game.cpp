#include<bits/stdc++.h>
using namespace std;
int s[30],t;
int main()
{
    string a;
    cin>>a;
    int len=a.size();
    for(int i=0;i<len;i++)
    {
        s[a[i]-'a']++;
    }
    for(int i=0;i<30;i++)
    {
        if(s[i]%2!=0) t++;
    }
    if(t==0 || t%2!=0) puts("First");
    else puts("Second");
    return 0;
}

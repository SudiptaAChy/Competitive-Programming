#include<bits/stdc++.h>
using namespace std;
int s[30];
main()
{
    int k;
    string a;
    cin>>k>>a;
    int n=a.size();
    for(int i=0;i<n;i++)
        s[a[i]-'a']++;
    for(int i=0;i<30;i++)
    {
        if(s[i]%k!=0)
        {
            puts("-1");
            return 0;
        }
    }
    for(int st=0;st<k;st++)
    {
        for(int i=0;i<30;i++)
        {
            if(s[i]!=0)
            {
                int len=s[i]/k;
                for(int j=0;j<len;j++)
                {
                    char ch=i+'a';
                    cout<<ch;
                }
            }
        }
    }
}

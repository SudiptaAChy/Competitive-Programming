#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    cin>>s;
    char ch='a';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==ch)
            ch++;
        else if(s[i]>ch)
        {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
}

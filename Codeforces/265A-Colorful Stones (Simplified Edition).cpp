#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,x=1;
    char s[10000],t[10000];
    cin>>s>>t;
    for(i=0;t[i];i++)
    {
        if(t[i]==s[j])
        {
            j++;
            x++;
        }
    }
    cout<<x;
	return 0;
}

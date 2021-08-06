#include<bits/stdc++.h>
using namespace std;
vector<int> createlps(string pattern)
{
    vector<int>lps(pattern.length());
    int index=0;
    for(int i=1;i<pattern.length(); )
    {
        if(pattern[index] == pattern[i])
        {
            lps[i] = index+1;
            index++,i++;
        }
        else
        {
            if(index!=0) index = lps[index-1];
            else
            {
                lps[i]=index;
                i++;
            }
        }
    }
    return lps;
}
void kmp(string text,string pattern,int cs)
{
    int cnt=0;
    vector<int>lps = createlps(pattern);
    int i=0,j=0; /// i->text || j->pattern
    while(i<text.length())
    {
        if(text[i] == pattern[j])
        {
            ++i;
            ++j;
        }
        else
        {
            if(j!=0) j = lps[j-1];
            else ++i;
        }
        if(j == pattern.length())
        {
            cnt++;
            j = lps[j-1];
        }
    }
    printf("Case %d: %d\n",cs,cnt);
}
int main(void)
{
    int t;
    scanf("%d ",&t);
    for(int cs=1;cs<=t;cs++)
    {
        string text,pattern;
        cin>>text>>pattern;
        kmp(text,pattern,cs);
    }
    return 0;
}

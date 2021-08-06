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
void kmp(string text,string pattern)
{
    bool fnd = false;
    vector<int>lps = createlps(pattern);
    int i=0,j=0;
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
            puts("y");
            fnd=1;
            break;
        }
    }
    if(!fnd) puts("n");
}
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string text;
        cin>>text;
        int q;
        scanf("%d",&q);
        while(q--)
        {
            string pattern;
            cin>>pattern;
            kmp(text,pattern);
        }
    }
    return 0;
}


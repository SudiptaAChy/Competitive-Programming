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
int main(void)
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        string a;
        string b;
        cin>>a;
        b=a;
        reverse(b.begin(),b.end());
        a=b+"|"+a;
        vector<int>lps = createlps(a);
        printf("Case %d: %d\n",cs,2*b.size()-lps[lps.size()-1]);
    }
    return 0;
}

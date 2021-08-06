/// https://www.youtube.com/watch?v=Ic80xQFWevc
#include<bits/stdc++.h>
#define N 150009
using namespace std;
char s1[N],s2[N],s3[N];
struct suffix {
    int index,first,second;
};
bool cmp(struct suffix a, struct suffix b)
{
    if(a.first == b.first) return a.second<b.second;
    else return a.first<b.first;
}
bool cmp2(string a,string b)
{
    return a.size()<b.size();
}
bool check(string s,string a,string b,string c)
{
    if(a.find(s)!=string::npos && b.find(s)!=string::npos && c.find(s)!=string::npos) return true;
    return false;
}
int *buildSuffixArray(char *text, int n)
{
    struct suffix suffixes[n+3];
    for(int i=0;i<n;i++)
    {
        suffixes[i].index=i;
        suffixes[i].first=text[i]-'a';
        suffixes[i].second=((i+1)<n) ? (text[i+1]-'a') : -1;
    }
    sort(suffixes,suffixes+n,cmp);
    int idx[n+3];
    for(int k=4;k<2*n;k*=2)
    {
        int rank=0;
        int prev_rank=suffixes[0].first;
        suffixes[0].first=rank; /// 0 assign to first suffix rank
        idx[suffixes[0].index]=0;
        for(int i=1;i<n;i++)
        {
            if(suffixes[i].first == prev_rank && suffixes[i].second == suffixes[i-1].second)
            {
                prev_rank=suffixes[i].first;
                suffixes[i].first=rank;
            }
            else
            {
                prev_rank=suffixes[i].first;
                suffixes[i].first= ++rank;
            }
            idx[suffixes[i].index]=i;
        }
        for(int i=0;i<n;i++)
        {
            int next_index=suffixes[i].index+k/2;
            suffixes[i].second=(next_index<n)?suffixes[idx[next_index]].first: -1;
        }
        sort(suffixes,suffixes+n,cmp);
    }
    int *suffixArr=new int[n+3];
    for(int i=0;i<n;i++) suffixArr[i]=suffixes[i].index;
    return suffixArr;
}
vector<int> kasai(string txt, int suffixArr[],int n)
{
    vector<int> lcp(n, 0);
    vector<int> invSuff(n, 0);
    for (int i=0; i < n; i++) invSuff[suffixArr[i]] = i;
    int k = 0;
    for (int i=0; i<n; i++)
    {
        if (invSuff[i] == n-1)
        {
            k = 0;
            continue;
        }
        int j = suffixArr[invSuff[i]+1];
        while(i+k<n && j+k<n && txt[i+k]==txt[j+k]) k++;
        lcp[invSuff[i]] = k;
        if (k>0) k--;
    }
    return lcp;
}
int main()
{
//    freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        char str[N]={};
        scanf("%s %s %s",s1,s2,s3);
        strcat(str,s1);
        strcat(str,"#");
        strcat(str,s2);
        strcat(str,"%");
        strcat(str,s3);
        strcat(str,"@");

        int n=strlen(str);
        int *suffixArray = new int[n+3];
        suffixArray=buildSuffixArray(str,n);
        vector<int>lcp=kasai(str,suffixArray,n);

        int ans=0;
        int len1=strlen(s1)+1;
        int len2=strlen(s1)+strlen(s2)+2;
        int len3=strlen(s1)+strlen(s2)+strlen(s3)+3;

        for(int i=0;i<=n-3;i++)
        {
            int c1=0,c2=0,c3=0;
            for(int j=i;j<i+3;j++)
            {
                if(suffixArray[j]<len1) c1=1;
                else if(suffixArray[j]<len2) c2=1;
                else if(suffixArray[j]<len3) c3=1;
            }
            if(c1+c2+c3==3)
            {
                int x=min(lcp[i],lcp[i+1]);
                ans=max(ans,x);
            }
        }
        printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string s;
	int t=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
    {
        ///int j=i;
        while(s[i]==s[i+1] && i>=0)
        {
            s.erase(i,2);
            i--;
            t++;
        }
    }
    if(t%2==0) cout<<"No";
    else cout<<"Yes";
	return 0;
}


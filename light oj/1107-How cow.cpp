#include <bits/stdc++.h>
using namespace std;
int main()
{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);

	int t,m;
	int x1,y1,x2,y2;
	int x,y;
	cin>>t;
	for(int cs=1;cs<=t;cs++)
    {
        printf("Case %d:\n",cs);
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        while(m--)
        {
            cin>>x>>y;
            if((x>x1 && x<x2) && (y>y1 && y<y2))
                cout<<"Yes\n";
            else cout<<"No\n";
        }
    }

	return 0;
}

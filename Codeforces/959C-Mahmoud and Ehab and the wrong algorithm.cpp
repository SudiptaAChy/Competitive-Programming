#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
typedef long long ll;
const ll sz=1234567;
int n;
void sec1(void)
{
    if(n<6) puts("-1");
    else
    {
        for(int i=2;i<=4;i++) cout<<"1 "<<i<<endl;
        for(int i=5;i<=n;i++) cout<<"2 "<<i<<endl;
    }
}
void sec2(void)
{
    for(int i=2;i<=n;i++) cout<<"1 "<<i<<endl;
}
int main()
{
    cin>>n;
    sec1();
    sec2();
    ///main();
	return 0;
}

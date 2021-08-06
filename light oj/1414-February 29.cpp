#include<bits/stdc++.h>
using namespace std;
char mnth[13][20]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December"};
int day[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap(int y)
{
    if(y%400==0 || y%4==0 && y%100!=0)
        return 0;
    else
        return 1;
}
main(void)
{
    long long t,no=1,d1,d2,y1,y2,frh,hn,fr;
    long long mo1,mo2;
    long long i,j,k,l;
    char m1[100],m2[100],ch1,ch2;
    cin>>t;
    while(t--)
    {
        long long total;
        long long td1=0,td2=0;
        cin>>m1>>d1>>ch1>>y1;
        cin>>m2>>d2>>ch2>>y2;

        ///counting days in month1
        for(i=0;i<12;i++)
        {
            if(strcmp(mnth[i],m1)==0)
            {
                mo1=i;
                break;
            }
        }
        for(j=0;j<i;j++)
            td1+=day[j];
        td1+=d1;
        if(leap(y1)==0 && mo1>1)
            td1+=1;
        ///counting days in month2
        for(i=0;i<12;i++)
        {
            if(strcmp(mnth[i],m2)==0)
            {
                mo2=i;
                break;
            }
        }
        for(j=0;j<i;j++)
            td2+=day[j];
        td2+=d2;

        ///now calculation begin
        if(td1>60)
            y1+=1;
        if(td2<60)
            y2-=1;
        frh=(y2/400)-((y1-1)/400);
        fr=(y2/4)-((y1-1)/4);
        hn=(y2/100)-((y1-1)/100);
        total=frh+fr-hn;
        printf("Case %lld: %lld\n",no++,total);
    }
}

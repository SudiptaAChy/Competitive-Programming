#include<stdio.h>
int main()
{
    int arr[100000];
    int count;
    int max;
    int i,j,n,e,temp,frst,last;

    while((scanf("%d",&i))!=EOF)
    {
        max=0;
        scanf("%d",&j);
        frst=i;
        last=j;

        if(i>j)
        {
            temp=i;
            i=j;
            j=temp;
        }

        for(n=i,e=0;n<=j;n++,e++){
            arr[e]=n;
            count=1;
            while(arr[e]!=1){
                count++;
                if(arr[e]%2==0){
                    arr[e]=arr[e]/2;
                }
                else if(arr[e]%2!=0){
                    arr[e]=3*arr[e]+1;
                }
            }
            if(count>max)
                max=count;
            else
                max=max;
        }
        printf("%d %d %d\n",frst,last,max);
    }

    return 0;
}

#include<stdio.h>
main()
{
    int i,n,k,score[50];
    int count=0,target;
    scanf("%d %d",&n,&k);

    /*input value*/

    for(i=0;i<n;i++){
        scanf("%d",&score[i]);
    }

    /*define target (k'th) value*/

    for(i=0;i<n;i++){
        if((i+1)==k){
            target=score[i];
        }
    }

    /*compare value*/

    for(i=0;i<n;i++){
        if(score[i]>0){
            if(score[i]>=target){
                count++;
            }
            else
                count=count;
        }
        else
            count=count;
    }
    printf("%d\n",count);
}

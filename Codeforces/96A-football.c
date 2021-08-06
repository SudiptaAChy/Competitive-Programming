#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char Football[200],Initial;
    int Loop,Length,Counter=1;

    scanf("%s",Football);

    Length=strlen(Football);
    Initial=Football[0];

    for(Loop=0; Loop<Length-1; Loop++)
    {
        if(Initial==Football[Loop+1])
        {
            Counter++;
            if(Counter>6)
                break;

        }

        else
        {
            Initial=Football[Loop+1];
            Counter=1;
        }
    }

    if(Counter>6)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;


}


#include <stdio.h>

int main()
{
    int rank;
    printf("ENTER THE OBTAINED RANK: ");
    scanf("%d",&rank);
    if(rank<=3250)
    {
        printf("THE BRANCHES AVAILABLE ARE: CSE ISE ECE MEC");
    }
    else
    if(rank>3250 && rank<=6505)
    {
        printf("THE BRANCHES AVAILABLE ARE: ISE ECE MEC");
    }
    else
    if(rank>6505 && rank<=12012)
    {
        printf("THE BRANCHES AVAILABLE ARE: ECE MEC");
    }
    else
    if(rank>12012 && rank<=22340)
    {
        printf("THE BRANCHES AVAILABLE ARE:  MEC");
    }

    return 0;
}

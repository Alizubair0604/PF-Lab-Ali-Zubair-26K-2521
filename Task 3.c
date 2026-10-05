#include <stdio.h>
int main()
{
    int students = 15,temp, present = 0, absent = 0;
    while (students != 0)
    {
        printf("is student present or absent? (1 for present,0 for absent):");
        scanf("%d", &temp);
        if (temp == 1)
        {
            present = present + 1;
        }
        else if (temp == 0)
        {
            absent = absent + 1;
        }
        students--;
    }
    printf("The number of present students is:%d\n", present);
    printf("The the number of absent students is :%d\n", absent);
    return 0;
}

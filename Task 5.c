#include <stdio.h>
int main()
{
    int n;
    printf("Enter number");
    scanf("%d", &n);
    unsigned long long cat = 1;
    for (int i = 1; i <= n; i++)
    {
        cat = cat*2*(i*2-1)/(i+1);
    }
    printf("The catlin number for %d is %llu\n",n,cat);
    return 0;
}

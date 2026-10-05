#include <stdio.h>
int main()
{
    int n,temp=0,digit,even=0,odd=0;
    printf("Enter the digits:");
    scanf("%d",&n);
    while(n!=0)
    {
        temp=n;
        digit=temp%10;
        n=n/10;
        if (digit%2==0)
        {
            even=even+1;
        }
        else
        odd=odd+1;
        
        
    }
    printf("The even numbers are %d:\n",even);
    printf("The odd numbers are:%d\n",odd);
    return 0;
}

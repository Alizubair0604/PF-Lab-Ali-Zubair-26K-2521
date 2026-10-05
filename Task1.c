#include <stdio.h>
int main()
{
    int pin,temp,sum=0;
    printf("Enter 4 digit pin");
    scanf("%d",&pin);
    temp=pin;
    while(temp!=0)
    {
        int digit=temp%10;
sum=sum+digit;
temp=temp/10;
    }
    if(sum<10)
    printf("pin is weak");
    else
    printf("pin is strong");
    return 0;
}

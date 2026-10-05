#include <stdio.h>
int main(){
    int digits,rev=0,temp,n;
    printf("Enter Digits:");
    scanf("%d",&digits);
n=digits;
    while(n!=0)
    {
temp=n%10;
rev=temp+rev*10;
n=n/10;
    }
    printf("The reverse number is %d",rev);
    return 0;
}

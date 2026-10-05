#include <stdio.h>
int main()
{
    int forward,reverse=0,temp=0,n;
    printf("Enter book number:");
    scanf("%d",&forward);
 n=forward;
 while(n!=0)
 {
    temp=n%10;
    reverse=temp+reverse*10;
    n=n/10;
 }
 if(forward==reverse)
 printf("Valid");
 else 
 printf("Invalid");
 return 0;

}

#include <stdio.h>
int main()
{
    int arr[10];
    int smallest,largest,n=8;

    
        for (int i = 0; i < n; i++)
        {
            printf("Enter the number %d\n", i);
            scanf("%d", &arr[i]);
        }
                    int j=0;

       printf("\n------complete array------\n");
       for(int i=0;i<n;i++)
       {
        printf("%d",arr[i]);
       }
       smallest =arr[0];
       largest =arr[0];
       for(int i=1;i < n;i++)
       {
        if(arr[i]<smallest)
        smallest=arr[i];
        if (arr[i]>largest)
        largest=arr[i];
       }
       printf("\nThe min value in the array is:%d\n",smallest);
        printf("\nThe max value in the array is:%d\n",largest);
int key,found=0;
printf("Enter the number to search:");
scanf("%d",&key);
for(int i=0;i<n;i++)
    {
        if (arr[i]==key)
        {
        printf("The index for the element is:%d",i);
        found=1;
        break ;
        }
    }

        if(!found)
        printf("The element does not exist in array\n");
        printf("\n======INSERTION======\n");
        int pos,value;
        printf("Enter position:");
        scanf("%d",&pos);
        printf("Enter value of insertion:");
        scanf("%d",&value);
        for(int i=n-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=value;
        n++;
        printf("\n======DELETION======\n");
        int position;
         printf("Enter position you want to delete:");
        scanf("%d",&position);
        for(int i=position-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("\n=====Final Array=====\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
        

   
}

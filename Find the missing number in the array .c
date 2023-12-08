//C program to find the missing number in the array.
#include<stdio.h>
int main()
{
   int size,arr[100];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
   
   int sum1=0;
   for(int i=1;i<=size;i++)
   {
     sum1=sum1+i;
   }


   int sum2=0;
   for(int i=0;i<size;i++)
   {
     sum2=sum2+arr[i];
   }


   int sum=sum2-sum1;

   if(sum==0)
   {
    printf("\nNo missing number.");
   }
   else
   {
    printf("Mssing number = %d",sum);
   }


    return 0;
    
}











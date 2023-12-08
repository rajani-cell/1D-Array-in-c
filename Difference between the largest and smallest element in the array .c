//C program to find the difference between the largest and smallest element in the array.
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
   
   int max=arr[0];
   for(int i=0;i<size;i++)
   {
      if(max<arr[i])
      {
        max=arr[i];
      }
   }

   int min=arr[0];
   for(int i=0;i<size;i++)
   {
      if(min>arr[i])
      {
        min=arr[i];
      }
   }

   int  difference=max-min;
   printf("\nThe difference between the largest and smallest element = %d",difference=max-min);

    return 0;
    
}











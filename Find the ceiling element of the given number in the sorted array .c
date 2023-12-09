//C program to find the ceiling element of the given number in the sorted array.
#include<stdio.h>
int main()
{
   int size,arr[100];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the  element of array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

   int number;
   printf("Enter number :");
   scanf("%d",&number);

   int arr1[20],newsize=0;


   for(int i=0;i<size;i++)
   {
   
   if(number<arr[i])
   {
    
    arr1[newsize++]=arr[i];

   }
   }

 
   for(int i=0;i<newsize-1;i++)
   {
      for(int j=0;j<newsize-1-i;j++)
      {

       if(arr1[j]>arr1[j+1])
       {
       int temp=arr1[j];
       arr1[j]=arr1[j+1];
       arr1[j+1]=temp;
       }
      }
   }


   
   
   if(newsize==0)
   {
   printf("\nNO ceiling element.");

   }

   else
   {
     
   printf("\nThe ceiling element of %d = %d",number,arr1[0]);
   }

return 0;
}

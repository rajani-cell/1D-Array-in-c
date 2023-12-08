//C program to check a given number appears more than N/2 times in a sorted array of N integers

#include<stdio.h>
int main()
{
   int size,arr[100];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the sorted element of array :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int number;

    printf("Enter a elemen in a sorted array:");
    scanf("%d",&number);

   int count=0;
   for(int i=0;i<size;i++)
   {
     if(number==arr[i])
     {
        count++;
     }
   }

    
   if(count >(size/2))
   {
     printf("The number %d appears more than %d times in arr[]\n", number, size / 2);
    
   }

   else
   {
     printf("The number %d does not appear more than %d times in arr[]\n", number, size / 2);

   }

    return 0;
    
}










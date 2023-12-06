//C program to find occurrence of an element in one dimensional array.
#include<stdio.h>
int main()
{
    int arr[100],size;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the element of array 1 :");
    for(int i=0;i<size;i++)
    {
     scanf("%d",&arr[i]);
    }

    int num;
    printf("Enter number to find Occurrence :");
    scanf("%d",&num);

    
    int count=0;
    for(int i=0;i<size;i++)
    {
      if(arr[i]==num)
      {
        count++;
      }
      
    }

    printf("\nOccurrence of %d : %d",num,count);

    return 0;
    
}





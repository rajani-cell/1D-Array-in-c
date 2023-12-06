//C program to find Smallest and Largest elements from One Dimensional Array Elements.
#include<stdio.h>
int main()
{
    int arr[100],size;
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

  printf("\nLargest value = %d",max);
  printf("\nSmallest value = %d",min);

    return 0;
}

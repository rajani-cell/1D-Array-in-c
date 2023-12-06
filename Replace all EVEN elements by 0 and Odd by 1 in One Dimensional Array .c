//C program to replace all EVEN elements by 0 and Odd by 1 in One Dimensional Array
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

  
  for(int i=0;i<size;i++)
  {
   if(arr[i]%2==0)
   {
    arr[i]=0;
   }

   else
   {
     arr[i]=1;
   }
  }

  printf("New array :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr[i]);
    }


    return 0;
}

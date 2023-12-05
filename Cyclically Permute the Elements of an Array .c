//C Program to Cyclically Permute the Elements of an Array.
#include<stdio.h>

int permuted_array(int arr[100],int size,int position)
{
  for(int i=0;i<position;i++)
  {
    int temp=arr[size-1];
    {
      for(int j=size-1;j>0;j--)
      {
        arr[j]=arr[j-1];
      }


    }
     arr[0]=temp;
  }

}


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

    int position;
    printf("Enter rotated number :");
    scanf("%d",&position);


    permuted_array(arr,size,position);

    printf("\nAfer rotating,new array :");
    for(int i=0;i<size;i++)
    {
     printf("%d ",arr[i]);
    }

    

    return 0;
}





//C Program to find the Biggest Number in an Array of Numbers using Recursion.
#include<stdio.h>

int maxfind(int arr[100],int size)
{

if(size==1)
{
  return arr[0];
}

else
{

int largest_value=maxfind(arr+1,size-1);
return  arr[0]>largest_value ? arr[0] : largest_value;


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




    printf("Largest value = %d",maxfind(arr,size));

    return 0;
}

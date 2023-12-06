//C program to calculate Sum, Product of all elements.
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

  int sum=0,product=1;
  for(int i=0;i<size;i++)
  {
     sum=sum+arr[i];
     product=product*arr[i];  

  }

  printf("\nSum = %d",sum);
  printf("\nProduct = %d",product);

    return 0;
}

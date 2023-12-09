//Union in c program.
#include<stdio.h>
int main()
{
   int size1,arr1[100];
   printf("Enter the size of array 1:");
   scanf("%d",&size1);
   printf("Enter the element of array 1:");
   for(int i=0;i<size1;i++)
   {
      scanf("%d",&arr1[i]);
   }

   int size2,arr2[100];
   printf("Enter the size of array 2:");
   scanf("%d",&size2);
   printf("Enter the element of array 2:");
   for(int i=0;i<size2;i++)
   {
      scanf("%d",&arr2[i]);
   }

   int arr3[100];
   int newsize=0;

   for(int i=0;i<size1;i++)
   {
     arr3[newsize++]=arr1[i];  
   }

   
 
   for(int i=0;i<size2;i++)
   {
   int isfound=0;
   for(int j=0;j<size1;j++)
   {
      
      if(arr2[i] ==arr1[j])
      {
       isfound=1;
       break;
      } 
   }

   
   if(!isfound)
   {
     arr3[newsize++]=arr2[i];
   }

   }
    
 
  

   printf("\nUnion ="); 
   for(int i=0;i<newsize;i++)
   {
      printf("%d ",arr3[i]);
   }

   return 0;

}

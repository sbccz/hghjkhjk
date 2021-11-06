#include<stdio.h>
int main(){


   int i, hole, n, temp, arr[25];

   printf("How many numbers you are going to enter? :");
   scanf("%d",&n);

   printf("Enter %d elements: ", n);
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

   for(i=1;i<n;i++){
      temp=arr[i];
      hole=i;
      while((temp<arr[hole-1])&&(hole>0)){
         arr[hole]=arr[hole-1];
         hole--;
      }
      arr[hole]=temp;
   }

   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",arr[i]);

   return 0;
}

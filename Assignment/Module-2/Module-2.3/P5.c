//WAP to take two Array input from user and sort them in ascending or
//descending order as per user�s choice
#include <stdio.h>
void main (){
   int num[20];
   int i, j, a, n;
   printf("enter number of elements in an array : ");
   scanf("%d", &n);
   for (i = 0; i < n; ++i){
     printf("Enter the element : ");
      scanf("%d", &num[i]);
}
   for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
   printf("The numbers in ascending order is : \n");
   for (i = 0; i < n; ++i){
      printf("%d\n", num[i]);
   }
}


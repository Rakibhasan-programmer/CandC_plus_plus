#include<stdio.h>
#include<conio.h>

int main() {
   int size = 3;
   int matrix[3][3];
   int row, column = 0;
   int sum, sum1, sum2;
   int flag = 0;

   for (row=0; row<size; row++) {
      for (column=0; column<size; column++){
        scanf("%d", &matrix[row][column]);
      }
   }

   sum = 0;
   for (row=0; row<size; row++) {
      for (column=0; column<size; column++) {
         if (row == column)
            sum += matrix[row][column];
      }
   }

   //For Rows
   for (row=0; row<size; row++) {
      sum1 = 0;
      for (column=0; column<size; column++) {
         sum1 += matrix[row][column];
      }
      if (sum == sum1){
        flag = 1;
      }else {
         flag = 0;
         break;
      }
   }

   //For Columns
   for (row=0; row<size; row++) {
      sum2 = 0;
      for (column=0; column<size; column++) {
         sum2 += matrix[column][row];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   if (flag == 1)
      printf("YES\n");
   else
      printf("No\n");

   return 0;
}

#include <stdio.h>
#define row 3
#define col 2
int main() 
{
  int a[row][col];
  int aT[row][col];
  int row, col;
  printf("Enter rows and col: ");
  scanf("%d %d", &row, &col);
  for (int i = 0; i< row; ++i)
  {
       for (int j = 0; j< col; ++j)
       {
         scanf("%d", &a[i][j]);
       }
  }
  for (int i = 0; i< row; ++i)
  {
       for (int j = 0; j< col; ++j)
         {
	       a[i][j]=aT[j][i];
	 }
   printf("\nTranspose of the matrix:\n");
  }
  for (int i = 0; i < col; ++i)
  {
      for (int j = 0; j < row; ++j) 
      {
        printf("%d  ", aT[i][j]);
      }
    printf("\n");
  return 0;
  }
}

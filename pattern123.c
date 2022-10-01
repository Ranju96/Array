#include<stdio.h>
int main()
{
  int i,j,k;
  k=1;
  for(i=1;i<5;i++)
  {
    for(j=1;j<=i-1;j++)
    {
      printf("%d",k++);
    }
    printf("\n");
  }
  return 0;
}


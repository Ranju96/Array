#include <stdio.h>
#include <conio.h>
 
int main()
{
    int row, col, i, j;
    int a[50][50], b[50][50], sum[50][50];
    printf("Enter first Matrix of size %dX%d\n", row, col);
    for(i = 0;  i< row; i++)
	{
        for(j = 0; j < col; j++)
		{
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0;  i< row; i++)
	{
        for(j = 0; j < col; j++)
		{
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0;  i< row; i++)
	{
        for(j = 0; j < col; j++)
		{
            sum[i][j] =a[i][j] +b[i][j];
        }
    }
	printf("Sum Matrix\n");
    for(i = 0; i < row; i++)
	{
        for(j = 0; j < col; j++)
		{
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

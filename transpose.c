#include <stdio.h>
//#include <conio.h>
 
int main()
{
    int row, col, i, j;
    int a[50][50], AT[50][50];
    printf("Enter first Matrix of size %dX%d\n", row, col);
    for(i = 0;  i< row; i++)
	{
        for(j = 0; j < col; j++)
		{
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i< row; i++)
	{
        for(j= 0; j < col; j++)
		{
            AT[j][i] = a[i][j];
        }
    }
    printf("Transpose Matrix\n");
    for(i = 0; i < col; i++)
	{
        for(j = 0; j < row; j++)
		{
            printf("%d ", AT[i][j]);
        }
        printf("\n");
    }
    return 0;
}

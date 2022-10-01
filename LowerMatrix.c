#include <stdio.h>
#include <conio.h>
 
int main()
{
    int row, cols, size, rowCounter, colCounter;
    int inputMatrix[50][50];
    printf("Enter size square matrix\n");
    scanf("%d", &n);
    rows = cols = n;
     
    printf("Enter Matrix of size %dX%d\n", rows, cols);
    for(i = 0; i < rows; i++)
	{
        for(j = 0; j < cols; j++)
		{
            scanf("%d", &a[i][j);
        
		}
	}
	printf("Lower triangular Matrix\n");
    for(i = 0; i < rows; i++)
	{
        for(j = 0; j < cols; j++)
		{
            if(i < j)
			{
            printf("%d ", 0);
            } 
			else 
			{
				 printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

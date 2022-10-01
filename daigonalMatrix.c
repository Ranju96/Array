for(i = 0; i < rows; i++)
{
        for(j = 0; j < cols; j++)
		{
            if(i == j)
			{
                diagonalSum += a[rowCounter][colCounter];
            }
        }
    }
     printf("Sum of all diagonal elements of Matrix is: %d\n", diagonalSum);

#include<stdio.h>
int main()
{
	int a[10][20], temp;
	int i, j ,row ,column,n;
	printf("Enter the row and column ");
	scanf("%d%d",&row,&column);
	printf( "\nEnter elements of matrix: " );
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if(i<j)
			{
				temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
		}
	}
	printf("%d", temp);
}


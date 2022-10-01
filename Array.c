#include<stdio.h>
int main()
{
	int i,sum=0, n;
	int arr[50];
	printf("Enter the Array number:");
	scanf("%d",&n);
	printf("Enter the  Elements of array\n");
	for(i = 0; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("sum Elements of number\n");
    for(i = 0; i< n; i++)
	{
        sum = sum + arr[i];
    }
    printf("%d",sum);
	return 0;
}

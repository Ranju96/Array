#include<stdio.h>
int add(int arr[], int n);
int main(void)
{
	int a[6]={2,5,8,9,6,7};
	printf("sum of element of arrey :%d",add(a,6));
	return 0;
}
int add(int arr[], int n)
{
	int i, sum=0;
	for(i=0; i<n; i++)
	
		sum=sum+arr[i];
		return sum;
	
}

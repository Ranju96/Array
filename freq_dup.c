#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
    printf("\nEnter max number of elements in array");
    scanf("\t%d",&n);
    int arr[n];
    printf("\nEnter array elements");
    for(i=0;i<n;i++)
	{
        scanf("\n%d",&arr[i]);
    }	
	int max=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	int freq[max+1];
	for(i=0;i<=max;i++)
	{
		freq[i]=0;
	}
	for(i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	printf("Duplicate element is/are:\n");
	for(i=0;i<=max;i++)
	{
		if(freq[i]>1)
		{
			printf("%d\t",i);
			printf("is repeated %d\t",freq[i]);
			printf("times\n");
		}
	}
    return 0;    
}

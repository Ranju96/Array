#include<stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])

void findDuplicateElement(int arr[], int size)
{
    int i, j;
    int count=0;
    printf("Repeating elements are ");
    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
               printf("%d\n",arr[i]);
               count++; 
                break;
            }
        }
    } 
	printf("\nTotal number of duplicate elements found in array = %d", count);
    
}
int main()
{
    //int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int n, i;
    printf("Enter Array number:");
    scanf("%d",&n);
    printf("Enter the Element of number:");
    int arr[n];
    for(i=0; i<n; i++)
    {
    	scanf("%d",&arr[i]);
	}
    //const int n = ARRAY_SIZE(arr);
    findDuplicateElement(arr, n);
    return 0;
}



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
	int length = sizeof(arr)/sizeof(arr[0]);        
    printf("Duplicate elements in given array: \n");        
    for(i = 0; i < length; i++) {    
        for(j = i + 1; j < length; j++) {    
            if(arr[i] == arr[j])    
                printf("%d\n", arr[j]);    
        }    
    }    
    return 0;    
}

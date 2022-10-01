#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,temp,j;
    printf("\nEnter max number of elements in array");
    scanf("\t%d",&n);
    int arr[n];
    printf("\nEnter array elements");
    for(i=0;i<n;i++)
	{
        scanf("\n%d",&arr[i]);
    }	 
	for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
           if(arr[i]>arr[j]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }      
	j=0;       
	int tmp[n]; 
    for(i = 0; i <n; i++) {       
    	if(arr[i] != arr[i+1])
		{    
            tmp[j] = arr[i];
            j++;
        }
    }  
	for(i=0;i<j;i++)
	{
		printf("\t%d",tmp[i]);
	}  
    return 0;    
}

#include<stdio.h>
#define MAX 50;
int n=0;

void insert()
{
	int i, pos, val;
	printf("\nEnter Element");
	scanf("%d",&val);
	for(i=0; i<n; i++)
	{
		if(arr[i]>val)
		{
			pos=i;
			break;
		}
	}
	if(n==MAX || pos<0 || pos>n)
	{
		printf("\nlist is full");
		
	}
	for(i=0 ; i>pos; i--)
	{
	   arr[i]=arr[i-1];
    }
    arr[pos]=val;
    n=n+1;
}
void del()
{
	int i, val, pos;
	printf("\n Enter the element you want ot delete");
	scanf("%d",&val)
	{
		for(i=0; i<n; i++)
		{
			if(arr[i]==val)
			{
				pos=i;
			}
		}
		for(i=pos; i<n; i++)
		{
			arr[i]=arr[i+1];
		}
		n=n-1;
	}
}
void search()
{
	int flag=0, i, val;
	printf("Enter the Element to search");
	scanf("%d",&val);
	for(i=0; i<n; i++)
	{
		if(arr[i]==val)
		{
			printf("\nElement found at%d",i+1);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("\Element not found");
	}
}
void display()
{
	int i;
	for(i=o; i<n; i++)
	{
		printf("\t%d",arr[i]);
	}
}
int main()
{
	int i, option;
	printf("Enter the number of Element :");
	scanf("\t%d",&n);
	printf("Enter array Elements");
	for(i=0; i<n; i++)
	{
		scanf("\n%d",&arr[i]);
	}
	do
	{
	 printf("\n main MENU\n1. Insert\n2.Delete\n3.search\n4. Display\n5.Exit");
	 printf("\n Enter your choice");
	 scanf("%d",&option);
	 switch(option)
	 {
	 	case 1: insert();
	 	break;
	 	case 2: delete();
	 	break;
	 	case 3: search();
	 	break;
	 	case 4: display();
	 	break;
	 	case 5: exit(0);
	 	break;
	 	default:printf("\nInvalid choice");
	 	
		 }	
	}
	while(1);
}

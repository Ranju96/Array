#include<stdio.h>
int main()
{
        //reverse the arrey.
        int a[2]={5,6};
        int i, multi=1;
        for(i=0; i<2; i++)
        {
           multi=multi * a[i];
        }
	printf("%d",multi);
        return 0;
}               

#include<iostream>
using namespace std;

int main()
{
	int a[10][20];
	int i, j row ,column,n;
	cout<<"Enter the row and column ";
	cin>>row>>column;
	cout << "\nEnter elements of matrix: " << endl;
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
	cout<<temp<<endl;
}


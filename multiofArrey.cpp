#include<iostream>
using namespace std;
int main()
{
        //reverse the arrey.
        int a[5]={1,6,2,4,5};
        int i, multi=1;
        for(i=0; i<5; i++)
        {
		multi=multi*a[i];
        }
        cout<<multi<<endl;
        return 0;
}                                                                                                                           

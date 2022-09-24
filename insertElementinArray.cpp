#include <iostream>
using namespace std;
int main()
{
   int arr[40],pos,i;
   int n,value;
   cout<<"enter the Elements in array :"<<endl;
   cin>>n;

   cout<<"Enter the Element:"<<endl;
   for(i=0; i<n; i++)
      cin>>arr[i];
   cout<<"enter the position  insert the element:"<<endl;
   cin>>pos;
   cout<<"enter the value into that position:"<<endl;
   cin>>value;

   for(i=n-1;i>=pos-1;i--)
   {
      arr[i+1]=arr[i];
   }
   arr[pos-1]= value;

   cout<<" after inserting the value is\n"<<endl;
   for(i=0;i<=n;i++)
   {
      cout<<arr[i]<<endl;
   }
   return 0;

}

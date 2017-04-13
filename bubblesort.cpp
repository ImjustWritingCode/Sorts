#include<iostream>
using namespace std;
int main(void)
{
	int arr[5];
	int i,j;
	cout<<"Please insert array: ";
	for(i=0;i<5;i++)
		cin>>arr[i];
	for(i=4;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
	cout<<endl<<"After bubblesorted, your array has converted to: ";
	for(i=0;i<5;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}

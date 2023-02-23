#include<iostream>
using namespace std;
int n=0;
int N=0;
bool isEmpty()
{
	if(N!=0)
		return false;
	else 
		return true;
}
void search_element_and_replace(int arr[])
{
	if(!isEmpty())
	{
		int k,r;
		cout<<endl<<"Enter the value to search for : ";
		cin>>k;
		cout<<endl<<"Enter the element to replace with : ";
		cin>>r;
		for(int i=0; i<N; i++)
		{
			if(arr[i]==k)
			{
				arr[i] = r;
			}
		}
		cout<<"Entered value not present in list "<<endl;
	}
	else
		cout<<"List is Empty "<<endl;
}
int main()
{
	cout<<"Enter the size of List : ";
	cin>>n;
	int arr[n] = {1,2,3,4,5};
	for(int i=0; i<n; i++)
	{
		if(arr[i]!=0)
			N++;
		else
			break;
	}
		cout<<endl<<"List Before : ";
		for(int i=0; i<N; i++)
		{
			cout<<arr[i]<<" ";
		}
		search_element_and_replace(arr);
		cout<<endl<<"List After : ";
		for(int i=0; i<N; i++)
		{
			cout<<arr[i]<<" ";
		}

	return 0;
}

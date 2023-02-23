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
void delete_at_start(int arr[])
{
	if(!isEmpty())
	{
		for(int i=0; i<N-1; i++)
		{
			arr[i] = arr[i+1];
		}
		arr[N-1] = 0;
		N--;
	}
	else
		cout<<endl<<"List is Empty "<<endl;
}
int main()
{
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n] = {1,2,3,4,5};
	for(int i=0; i<n; i++)
	{
		if(arr[i]!=0)
			N++;
		else
			break;
	}
		cout<<"List Before : ";
		for(int i=0; i<N; i++)
		{
			cout<<arr[i]<<" ";
		}
		delete_at_start(arr);
		cout<<endl;
		cout<<"List After : ";
		for(int i=0; i<N; i++)
		{
			cout<<arr[i]<<" ";
		}

	return 0;
}

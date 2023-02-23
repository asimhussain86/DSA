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
void delete_in_middle(int arr[])
{
	int index;
	if(!isEmpty())
	{
		cout<<endl<<"Enter the array index between 0 and "<<(N-1)<<" : ";
		cin>>index;
		//arr[index] = 0;
		if(index>=0 && index<=N-1)
		{
			for(int i=index; i<N; i++)
			{
				arr[i] = arr[i+1];
			} 
			N--;
	    }
	}
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
		delete_in_middle(arr);
		cout<<endl;
		cout<<"List After : ";
		for(int i=0; i<N; i++)
		{
			cout<<arr[i]<<" ";
		}

	return 0;
}

#include<iostream>
using namespace std;
int n=0;
int N=0;
bool isFull()
{
	if(n==N)
		return true;
	else 
		return false;
}
int insert_in_middle(int arr[])
{
	int val,index;
	if(!isFull())
	{
		cout<<"Enter the value ";
		cin>>val;
		cout<<endl<<"Enter the array index between 0 and "<<(N-1)<<" : ";
		cin>>index;
		if(index >= 0 && index < N)
		{
			for(int i=N; i>=index; i--)
			{
				arr[i] = arr[i-1];
			}
			arr[index] = val;
			N++;
		}
		else
		{
			cout<<endl<<"Index is out range "<<endl;
		}
	}
	else
	{
		cout<<"List is Full "<<endl;
	}
}
int main()
{
	cout<<"Enter the value of n ";
	cin>>n;
	int arr[n] = {1,2,3,4,5,6};
	
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
	
	cout<<endl;
	insert_in_middle(arr);
	cout<<endl;
	
	cout<<"List After : ";
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}


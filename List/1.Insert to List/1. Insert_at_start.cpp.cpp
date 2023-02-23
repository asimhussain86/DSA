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
int insert_at_start(int arr[])
{
	if(!isFull())
	{
	int val, temp;
	cout<<"Enter the value : ";
	cin>>val;
	for(int i=N; i>0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = val; 
	N++;
	}
	else
		cout<<"List is Full"<<endl;
}
int main()
{
	cout<<"Enter the value of n ";
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
	
	cout<<endl;
	insert_at_start(arr);
	cout<<endl;
	
	cout<<"List After : ";
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}


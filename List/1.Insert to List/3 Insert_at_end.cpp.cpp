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
int insert_at_end(int arr[])
{
	if(!isFull())
	{
	int val;
	cout<<"Enter the value : ";
	cin>>val;
	arr[N] = val; 
	N++;
	}
	else
	{
		cout<<"List is Full";
	}
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
	insert_at_end(arr);
	cout<<endl;
	
	cout<<"List After : ";
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}


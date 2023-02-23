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
bool isEmpty()
{
	if(N==0)
		return true;
	else 
		return false;
}
void pop(int arr[])
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
		cout<<endl<<"Stack is Empty"<<endl;
}
void push(int arr[])
{
	if(!isFull())
	{
	int val,temp;
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
		cout<<"Stack is Full"<<endl;
}
int main()
{
	cout<<"Enter the size of Stack : ";
	cin>>n;
	int arr[n] = {1,2,3,4,5};
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]!=0)
			N++;
		else
			break;
	}
	
	cout<<"Stack Before : ";
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	int ch;
	cout<<endl<<"Do you want to perform push or pop : "<<endl<<"Push -> 1 "<<endl<<"Pop -> 2 "<<endl;
	cin>>ch;
	if(ch==1)
	{
		push(arr);
	}
	else
	{
		pop(arr);
	}
	cout<<endl;
	cout<<endl;
	
	cout<<"Stack After : ";
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}


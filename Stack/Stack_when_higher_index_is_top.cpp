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
		arr[N] = 0;
		N--;
	}
	else
		cout<<endl<<"Stack is Empty"<<endl;
}
void push(int arr[])
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
		cout<<endl<<"Stack is Full"<<endl;
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


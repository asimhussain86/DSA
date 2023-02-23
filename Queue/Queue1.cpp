#include<iostream>
using namespace std;
int n=0; 
int N=0;
bool isEmpty()
{
	if(n==N)
		return true;
	else
		return false;
}
bool isFull()
{
	if(n!=N)
		return true;
	else
		return false;
}
void enQueue(int arr[])
{
	if(isFull())
	{
		int val;
		cout<<"Enter a value : ";
		cin>>val;
		for(int i=N; i>0; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[0] = val;
		N++;
	}
	else
	{
		cout<<"Queue is Full "<<endl;
	}
}
void deQueue(int arr[])
{
	if(isEmpty())
	{
		arr[N] = 0;
		N--;
	}
	else
	{
		cout<<"Queue is Empty "<<endl;
	}
}
void display(int arr[])
{
	for(int i=0; i<N; i++)
	{
		cout<<arr[i] <<" ";
	}
	cout<<endl;
}
int main()
{
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n] = {1,2,3,4};
	N=4;
	int ch;
	do
	{
		cout<<"What do you want to perform : "<<endl<<"enQueue -> 1"<<endl<<"deQueue -> 2"<<endl<<"Display -> 3"<<endl<<"Exit -> 4"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				enQueue(arr);
				break;
			
			case 2:
				deQueue(arr);
				break;
			
			case 3:
				display(arr);
				break;
				
			case 4:
				exit(0);
				break;
			default:
				cout<<"Invalid Input "<<endl;
				break;
		}
	}while(true);
	return 0;
}

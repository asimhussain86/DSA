#include<iostream>
using namespace std;
int front = 0;
int back = 0;
int n=0;
bool isFull()
{
	if(n!=back)
		return true;
	else
		return false;
}
bool isEmpty()
{
	if(back!=0 && front!=back)
	{
		return true;	
	}
	else
	{
		back = 0;
		front = 0;
		return false;
	}
}

void enQueue(int arr[])
{
	if(isFull())
	{
		int val;
		cout<<"Enter a value : ";
		cin>>val;
		arr[back] = val;
		back++;
		cout<<"Back : "<<back<<endl;
	}
	else
	{
		cout<<"Queue is full "<<endl;
	}
}
void deQueue(int arr[])
{
	if(isEmpty())
	{
		arr[front] = 0;
		front++;
	}
	else
		cout<<"Queue is empty "<<endl;
}
void print(int arr[])
{
	if(isEmpty())
	{
		for(int i=front; i<back; i++)
		{
			cout<<arr[i] << " ";
		}
	}
	else
	{
		cout<<"Queue is empty"<<endl;
	}
	cout<<endl;
}
int main()
{
	cout<<"Enter the size of Queue : ";
	cin>>n;
	int arr[n] = {};
	int ch;
	do
	{
		cout<<"What do you want "<<endl<<"EnQueue -> 1 "<<endl<<"DeQueue -> 2"<<endl<<"Print -> 3"<<"Exit -> 4"<<endl;
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
				print(arr);
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

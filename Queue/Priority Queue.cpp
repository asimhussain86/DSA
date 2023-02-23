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
void low_priority_deQueue(int arr[])
{
	if(!isEmpty())
	{
		for(int i=0; i<N;i++)
		{
			arr[i] = arr[i+2];
		}
		N-=2;
	}
	else
		cout<<"Queue is empty "<<endl;
}
void high_priority_deQueue(int arr[])
{
	if(!isEmpty())
	{
		arr[N] = 0;
		arr[N-1] = 0;
		N-=2; 
	}
	else
		cout<<"Queue is empty "<<endl;
}
void moderate_priority_deQueue(int arr[])
{
	if(!isEmpty())
	{
		int index;
		for(int i=0;i<N;i++)
		{
			if(arr[i]==2)
			{
				index = i;
				break;
			}
		}
		for(int j=index; j<N; j++)
		{
			arr[j] = arr[j+2];
		}
		N-=2;
	}
}
void moderate_priority_enQueue(int arr[])
{
	if(!isFull())
	{
		int val;
		cout<<"Enter the value : ";
		cin>>val;
		int index;
		for(int i=0;i<N;i++)
		{
			if(arr[i]==2)
			{
				index = i;
				break;
			}
		}
		for(int j=N+1; j>index; j--)
		{
			arr[j] = arr[j-2];
		}
		arr[index] = 2;
		arr[index+1] = val;
		N+=2;
	}
}
void high_priority_enQueue(int arr[])
{
	if(!isFull())
	{
		int val;
		cout<<"Enter the value : ";
		cin>>val;
		arr[N] = 3;
		arr[N+1] = val;
		N+=2;
	}
	else
		cout<<"Queue is Full "<<endl;
}
void low_priority_enQueue(int arr[])
{
	if(!isFull())
	{
		int val;
		cout<<"Enter the value : ";
		cin>>val;
		int index;
			for(int i=N+1; i>0; i--)
			{
				arr[i] = arr[i-2];
			}
		arr[0] = 1;
		arr[1] = val;
		N+=2;
	}
	else
		cout<<"Queue is Full "<<endl;
}
void display(int arr[])
{
	cout<<endl;
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<< " ";
	}
	cout<<endl<<endl;
}
int main()
{
	cout<<"Enter the size of array ";
	cin>>n;
	int arr[n] = {1,22,2,45,3,78};
	N=6;
	int ch;
	do
	{
	cout<<"1 -> Low Priority enQueue"<<endl<<"2 -> High Priority enQueue"<<endl<<"3 -> High Priority enQueue"<<endl<<"4 -> Low Priority deQueue"<<endl<<"5 -> Moderate Priority deQueue"<<endl<<"6 -> High Priority deQueue"<<endl<<"7 -> Display"<<endl<<"8 -> Exit"<<endl<<"Enter choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			low_priority_enQueue(arr);
			break;
		case 2:
			moderate_priority_enQueue(arr);
			break;
		case 3:
			high_priority_enQueue(arr);
			break;
		case 4:
			low_priority_deQueue(arr);
			break;
		case 5:
			moderate_priority_deQueue(arr);
			break;
		case 6:
			high_priority_deQueue(arr);
			break;
		case 7:
			display(arr);
			break;
		case 8:
			exit(0);
			break;
		default:
			cout<<"Invalid Input ";
			break;
	}
	}while(true);
	return 0;
}

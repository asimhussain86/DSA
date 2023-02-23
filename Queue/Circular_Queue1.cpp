#include<iostream>
using namespace std;
int n=0;
int front = -1;
int rear = -1;
void enQueue(int arr[], int size)
{
	int value;
	cout<<"Enter a value : ";
	cin>>value;
	if((front == 0 && rear == size - 1) || (rear == (front-1)%(size-1)))
	{
		cout<<"Queue is full "<<endl;
	}
	else if(front == -1)//first element to push
		front = rear = 0;
	else if(rear == size -1 && front != 0)
		rear = 0;
	else
		rear++;
	
	arr[rear] = value;
}
void deQueue(int arr[], int size)
{
	if(front == -1)
		cout<<"Queue is Empty "<<endl;
	else if(front == rear)
	{
		arr[front] = 0;
		front = rear = -1;
	}
	else if(front  == size -1)
	{
		arr[front] = 0;
		front = 0;
	}
	else
	{
		arr[front] = 0;
		front ++;
	}
}
void display(int arr[], int size)  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            cout<<arr[i]<< " ";  
            i=(i+1)%size;  
        }
		cout<<endl;  
    }  
}  
int main()
{
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n] = {};
	int ch;
	do
	{
		cout<<"What do you want to perform : "<<endl<<"enQueue -> 1"<<endl<<"deQueue -> 2"<<endl<<"Display -> 3"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				enQueue(arr,n);
				break;
			
			case 2:
				deQueue(arr,n);
				break;
			
			case 3:
				display(arr,n);
				break;
				
			default:
				cout<<"Invalid Input "<<endl;
				break;
		}
	}while(true);
	return 0;
}

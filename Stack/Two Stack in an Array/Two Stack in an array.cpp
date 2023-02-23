#include<iostream>
using namespace std;
int n=0; 
int N=0;
int top1 = -1;
int top2 = 0;
void push1(int arr[])
{
	if(top2 - top1 > 1)
	{
		int k;
		cout<<"Enter the element to be pushed in Stack 1 : ";
		cin>>k;
		top1++;
		arr[top1] = k;
	}
	else
	{
		cout<<"Stack1 Overflow "<<endl;
	}
	cout<<endl<<endl;
}
void push2(int arr[])
{
	if(top2 - top1 > 1)
	{
		int k;
		cout<<"Enter the element to be pushed in Stack 2 : ";
		cin>>k;
		top2--;
		arr[top2] = k;
	}
	else
	{	
		cout<<"Stack2 Overflow "<<endl;
	}
	cout<<endl<<endl;
}
void pop1(int arr[])
{
	if(top1>=0)
	{
		arr[top1] = 0;
		top1--;
	}
	else
	{
		cout<<"Stack1 UnderFlow ";
	}
	cout<<endl<<endl;
}
void pop2(int arr[])
{
	if(top2<n)
	{
		arr[top2] = 0;
		top1++;
	}
	else
	{
		cout<<"Stack2 UnderFlow ";
	}
	cout<<endl<<endl;
}
void display1(int arr[])
{
	cout<<"Stack 1 : ";
	for(int i=0; i<=top1; i++)
	{
		cout<<arr[i]<< " ";
	}
	cout<<endl<<endl;
}
void display2(int arr[])
{
	cout<<"Stack 2 : "<<endl;
	for(int i=n; i>=top2; i--)
	{
		cout<<arr[i]<< " ";
	}
	cout<<endl<<endl;
}
void count(int arr[])
{
	cout<<"Counting array elements : ";
		for(int i=0; i<n; i++)
		{
			if(arr[i] != 0)
				N++;
		}
		cout<<endl<<"N : "<<N<<endl;
}
void print(int arr[])
{
		cout<<"Printing array : ";
		for(int i=0; i<n; i++)
		{
			cout<<arr[i] <<" ";
		}
		cout<<endl;
}
int main()
{
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n] = {};
	top2 = n;
	int ch, ch1;
	do
	{
		cout<<"What do you want perform : "<<endl<<"Exit -> 0"<<endl<<"Stack1 -> 1"<<endl<<"Stack2 -> 2"<<endl<<"Display -> 3"<<endl<<"Count -> 4"<<endl<<"Print -> 5"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 0:
				exit(0);
				break;
			case 1:
			{
				cout<<"What do you want with stack1: "<<endl<<"Push -> 1" <<endl<< "Pop -> 2"<<endl;
				cin>>ch1;
				switch(ch1)
				{
					case 1:
						push1(arr);
						break;
					case 2:
						pop1(arr);
						break;
					default:
						cout<<"Invalid Input "<<endl;
						break;
				}
			}
			break;
				case 2:
				{
				cout<<"What do you want with stack2 : "<<endl<<"Push -> 1" <<endl<< "Pop -> 2"<<endl;
				cin>>ch1;
				switch(ch1)
				{
					case 1:
						push2(arr);
						break;
					case 2:
						pop2(arr);
						break;
					default:
						cout<<"Invalid Input "<<endl;
						break;
				}	
		}
		break;
		case 3:
			{
				cout<<"Stac1 -> 1"<<endl<<"Stack -> 2"<<endl;
				cin>>ch1;
				switch(ch1)
				{
					case 1:
						display1(arr);
						break;
					case 2:
						display2(arr);
						break;
					default:
						cout<<"Invalid Input "<<endl;
						break;
				}	
			}
		break;
		case 4:
			{
				count(arr);
			}
		break;
		case 5:
			{
				print(arr);
			}
		break;
		default : 
		cout<<"Invalid Input "<<endl;
		break;
	}
	}while(true);
	return 0;
}


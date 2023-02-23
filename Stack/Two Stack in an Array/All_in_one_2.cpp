#include<iostream>
#include<stdio.h>
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
		return false;
	else 
		return true;
}
void pop(int arr[])
{
	if(!isEmpty())
	{
		arr[N] = 0;
		N--;
	}
	else
		cout<<"Stack is Empty "<<endl;
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
		cout<<"Stack is Full "<<endl;
}
void search_element(int arr[])
{
	if(!isEmpty())
	{
	int k;
	cout<<endl<<"Enter the value to search for : ";
	cin>>k;
	for(int i=0; i<N; i++)
	{
		if(arr[i]==k)
		{
			cout<<"Element Found "<<endl;
			return;
		}
	}
	cout<<"Element not Found "<<endl;	
	}
	else
		cout<<"Stack is Empty "<<endl;
}
void search_further(int arr[])									
{																
	if(!isEmpty())											
	{																
	int k;														
	cout<<"Enter the value to search for : ";							
	cin>>k;															
	int cnt = 0;													
	for(int i=0; i<N; i++)											
	{															
		if(arr[i]==k)													
			cnt++;													
	}															
	cout<<endl;
	cout<<"Element found times : "<<cnt;
	}
	else
		cout<<"Stack is Empty "<<endl;
}
void search_and_replace(int arr[])
{
	if(!isEmpty())
	{
	int k,r;
	cout<<endl<<"Enter the value to search for : ";
	cin>>k;
	cout<<endl<<"Enter the element to replace with : ";
	cin>>r;
	for(int i=0; i<N; i++)
	{
		if(arr[i]==k)
		{
			arr[i] = r;
		}
	}
	}
	else
		cout<<"Stack is Empty "<<endl;
}
int main()
{
	int ch, ch1;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n] = {11,22,33,44};
	for(int i=0; i<n; i++)
	{
		if(arr[i]!=0)
			N++;
		else
			break;
	}
	cout<<endl;
	cout<<"Stack Before : ";
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	do 
	{
		cout<<endl<<endl<<"What do you want to perform from the given : "<<endl<<"Exit -> 0"<<endl<<"Push -> 1"<<endl<<"Pop -> 2"<<endl<<"Search -> 3"<<endl<<"Display -> 4"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 0:
					exit(0);
			case 1:
					push(arr);
					cout<<endl<<endl;
					break;
			case 2:
					pop(arr);
					cout<<endl<<endl;
					break;
			case 3:
				{	
				cout<<endl<<endl<<"How do you want to search : "<<endl<<"Search and replace(update) -> 0"<<endl<<"Search a specific element -> 1"<<endl<<"Search further -> 2"<<endl;
				cin>>ch1;
				switch(ch1)
				{
					case 0:
							search_and_replace(arr);
							cout<<endl<<endl;
							break;
						
					case 1:
						{
							search_element(arr);
							cout<<endl<<endl;
							break;
						}
					case 2:
						{
							search_further(arr);
							cout<<endl<<endl;
							break;
						}
					default:
						{
							cout<<"Invalid Input "<<endl;
						}
				}	
				}
				break;
			case 4:
				{
					cout<<"Display : ";
					for(int i=0; i<N; i++)
					{
						cout<<arr[i]<<" ";
					}
					cout<<endl<<endl;
					break;
				}
			default:
				cout<<"Invalid input "<<endl;
				break;
		}

	}while(true);
	return 0;
}

#include<iostream>
using namespace std;
int n=0;
int N=0;
bool isEmpty()
{
	if(N!=0)
		return false;
	else 
		return true;
}
void search_element(int arr[])
{
	if(!isEmpty())
	{
	int k;
	cout<<"Enter the value to search for : ";
	cin>>k;
	for(int i=0; i<N; i++)
	{
		if(arr[i]==k)
		{
			cout<<endl;
			cout<<"Element found ";
		}
	}
	}
	else
		cout<<"List is Empty "<<endl;
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
	search_element(arr);
	return 0;
}

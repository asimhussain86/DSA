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
		cout<<"List is Empty "<<endl;
}
int main()
{
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n] = {1,2,3,4,5};
	
	for(int i=0; i<n; i++)
	{
		if(arr[i]!=0)
			N++;
		else
			break;
	}
	search_further(arr);
	return 0;
}

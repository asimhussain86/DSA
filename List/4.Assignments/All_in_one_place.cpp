#include<iostream>
using namespace std;
int n=0;
int N=0;
//Check the list is empty
bool isEmpty()
{
	if(N==0)
		return true;
	else 
		return false;
}
//Check the list full or not
bool isFull()
{
	if(n==N)
		return true;
	else 
		return false;
}
//Delete from end of the list
void delete_from_end(int arr[])
{
	if(!isEmpty())
	{
		arr[N-1] = 0;
		N--;
	}
	else
		cout<<"List is Empty "<<endl;
	
}
//Delete from start of the list
void delete_from_start(int arr[])
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
		cout<<"List is Empty "<<endl;
}
//Delete any where from between of the list
void delete_inside(int arr[])
{
	int index;
	if(!isEmpty())
	{
		cout<<endl<<"Enter the array index between 0 and "<<(N-1)<<" : ";
		cin>>index;
		//arr[index] = 0;
		if(index>=0 && index<=N-1)
		{
			for(int i=index; i<N; i++)
			{
				arr[i] = arr[i+1];
			} 
			N--;
	    }
	}
	else
		cout<<"List is Empty "<<endl;
}
//Insert
//Insert at end of the list
void insert_at_end(int arr[])
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
		cout<<"List is Empty "<<endl;
}
//Insert at start of the list
void insert_start(int arr[])
{
	if(!isFull())
	{
	int val, temp;
	cout<<"Enter the value : ";
	cin>>val;
	for(int i=N; i>0; i--)
	{
		temp = arr[i];
		arr[i] = arr[i-1];
		arr[i-1] = temp;
	}
	arr[0] = val; 
	N++;
	}
	else
		cout<<"List is Empty "<<endl;
}
//Insert any where inside of the list
void insert_inside(int arr[])
{
	int val,index;
	if(!isFull())
	{
		cout<<"Enter the value ";
		cin>>val;
		cout<<endl<<"Enter the array index between 0 and "<<(N-1)<<" : ";
		cin>>index;
		for(int i=N; i>=index; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[index] = val;
		N++;
	}
	else
		cout<<"List is Empty "<<endl;
}
//Search
//Search and replace (update) in the list
void search_and_replace_element(int arr[])
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
		cout<<"List is Empty "<<endl;
}
//Search element in the list
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
			break;
		}
	}
	}
	else
		cout<<"List is Empty "<<endl;
}
//Search Further in the list
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
	cout<<"List Before : ";
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl<<endl;
	char ch,main_ch;
	cout<<"Enter what do you want perform from the following and press the respective key "<<endl<<endl;
	cout<<"Insertion -> I "<<endl<<"Deletion -> D "<<endl<<"Search -> S"<<endl<<endl;
	cin>>main_ch;
	//INSERTION
	if(main_ch == 'I' || main_ch=='i')
	{
			cout<<"Where do you want insertion : "<<endl<<endl;
			cout<<"Start -> S "<<endl<<"End -> E "<<endl<<"Inside -> I "<<endl;
			cin>>ch;
			cout<<endl;
			if(ch=='S' || ch=='s')
			{
				insert_start(arr);
			}
			else if(ch=='E' || ch=='e')
			{
				insert_at_end(arr);
			}
			else if(ch=='I' || ch=='i')
			{
				insert_inside(arr);
			}
			else
			{
				cout<<"Wrong Input "<<endl;
			}
	}
	else if(main_ch == 'D' || main_ch=='d')
	{
			cout<<"Where do you want deletion : "<<endl<<endl;
			cout<<"Start -> S "<<endl<<"End -> E "<<endl<<"Inside -> I "<<endl;
			cin>>ch;
			cout<<endl;
			if(ch=='S' || ch=='s')
			{
				delete_from_start(arr);
			}
			else if(ch=='D' || ch=='e')
			{
				delete_from_end(arr);
			}
			else if(ch=='I' || ch=='i')
			{
				delete_inside(arr);
			}
			else
			{
				cout<<"Wrong Input "<<endl;
			}
	}
	else if(main_ch == 'D' || main_ch=='d')
	{
			cout<<"What do you want with search : "<<endl;
			cout<<"Only Search -> S "<<endl<<"Search and Replace -> R "<<endl<<"Search further -> F "<<endl;
			cin>>ch;
			cout<<endl;
			if(ch=='R' || ch=='r')
			{
				search_and_replace_element(arr);
			}
			else if(ch=='S' || ch=='s')
			{
				search_element(arr);
			}
			else if(ch=='F' || ch=='f')
			{
				search_further(arr);
			}
			else
			{
				cout<<"Wrong Input "<<endl;
			}
	}
	else
	{
		cout<<"Wrong Input "<<endl;
	}
	cout<<endl;
	
	cout<<"List After : ";
	for(int i=0; i<N; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}


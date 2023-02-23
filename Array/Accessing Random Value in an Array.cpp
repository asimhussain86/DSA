//Program # 1
// Accessing random value in Array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter the elements for array : ";
    for(int i = 0; i<n; i++)
    {
        cout<<endl<<"Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<"Enter the a random number in given range : 0 - "<<n-1<<" : ";
    int p;
    cin>>p;
    cout<<endl<<"Value present at index "<<p<<" of array is : "<<arr[p]<<endl;
    return 0;
}

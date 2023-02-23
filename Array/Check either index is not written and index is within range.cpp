//Program # 2
// Check either index is not written and index is within range
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array range : ";
    cin>>n;
    int x[n]={};
    int r;
    cout<<endl<<"Enter the range up to which array is to be filled : ";
    cin>>r;
    cout<<"Enter Elements ";
    for(int i=0; i<r;i++)
    {
           cin>>x[i];    
    }
    int c;
    cout<<endl<<"Enter the index which is to be checked for not written : ";
    cin>>c;
    if(x[c]==0 && c>=0 && c<=n)
    {
        cout<<endl<<"Value at index "<<c<<" is not written "<<endl<<"Index entered is within range "<<endl;
    }
    else if(x[c]!=0 && c>=0 && c<=n)   
        cout<<endl<<"Value at index "<<c<<" is already written : "<<x[c]<<endl<<"Index entered is within range "<<endl;
    else    
        cout<<endl<<"Value at index "<<c<<" is already written : "<<endl;
    return 0;
}

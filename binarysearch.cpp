#include<iostream>
using namespace std;
int main()
{
    int n,i,a[10],data;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched:\n ";
    cin>>data; 
int beg=0,end=n-1,mid=(beg+end)/2;
while(beg<=end && a[mid]!=data)
{
    if(a[mid]==data)
    {
        end=mid-1;
    }
    else 
    {
        beg=mid+1;
    }
   
    mid=(beg+end)/2;
}
if(data==a[mid])
{ int loc =mid;
    cout<<"Data is found at position: "<<loc<<endl;
}
else
{
    cout<<"Data doesn't exist"<<endl;
}
return 0;
}
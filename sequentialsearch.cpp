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
    cout<<"Enter the element to be searched: ";
    cin>>data;
   i=0;
   while(i<n)
    {
        if(a[i]==data)
        {
            cout<<"Element found at position:\n"<<i<<endl;
            break;
        }
        i++;
    }
    if(i==n)
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
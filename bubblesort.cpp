#include<iostream>
using namespace std;
int main()
{ int i,j,k,temp,n,a[10];
cout<<"Enter the number of elements :";
cin>>n;
for(i=0;i<n;i++){
    cout<<"Enter elements"<<i+1<<":";
          cin>>a[i];
        
}

for(i=0;i<n;i++)
{
    for(j=0;j<n-i-1;j++)
         {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        
         }
}
cout<<"The elements after Bubble Sort are:";
    for(k=0;k<n;k++){
        cout<<a[k]<<"\t";
    }
return 0;

}
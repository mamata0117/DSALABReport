#include<iostream>
using namespace std;
int main()
{ int i,j,k,temp,n,a[10];
cout<<"Enter the number of elements :";
cin>>n;
for(i=0;i<n;i++){
    cout<<"Enter element"<<i+1<<":";
          cin>>a[i];
        
}

for(i=0;i<n-1;i++)
{ 
    for(j=i+1;j<n;j++)
         {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        
         }
}
cout<<"The elements after Selection Sort are:";
    for(k=0;k<n;k++){
        cout<<a[k]<<"\t";
    }
return 0;

}
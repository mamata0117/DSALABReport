#include<iostream>
using namespace std;
 void fibonacci(int n)
 {
    static int a=0,b=1,c;
    if(n>0){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        fibonacci(n-1);
    }
 }
int main()
{
    int n;
    cout<<"Enter the number of terms\n";
    cin>>n;
    cout<<"The fibonacci series showing"<<n<<"terms :0 1  ";
    fibonacci(n-2);
    return 0;


}
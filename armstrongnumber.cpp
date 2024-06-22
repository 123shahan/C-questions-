#include<iostream>
using namespace std;
int main(){

int n,sum=0;
cout<<"Enter the number:";
cin>>n;
int temp=n;
while (n!=0){
    int rem=n%10;
    sum=sum+rem*+rem*+rem;
    n=n/10;

}
if (temp==sum){
    cout<<"armstrong number:"<<sum;
}
else
    cout<<"not a armstrong number:"<<sum;
    return 0;
}
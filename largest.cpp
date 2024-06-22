#include<iostream>
using namespace std;
int main(){
    double n1,n2,n3;
    cout<<"enter three numbers:";
    cin>>n1>>n2>>n3;
    
    //n1
    if(n1>=n2 && n1>=n3)
    cout<<"Largest numner:"<<n1;
    else if(n2>=n3 && n2>=n3)
    cout<<"Largest numnber:"<<n2;
    else
    cout<<"Largest number:"<<n3;
    return 0;
}
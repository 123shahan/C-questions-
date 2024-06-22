#include<iostream>
using namespace std;
int main(){
    int no;
    int i;
    int count = 0;
    cin>> no;
    for ( i = 2; i <= no; i++){
        if (no%i==0){
        count=count+1;
        }
    }
        if (count==1){
            cout<<"prime number";
        }
            else{
            cout<<"not a prime";
        }
        return 0;
}

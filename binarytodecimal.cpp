#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ld;
    int mult=1;
    int sum = 0;
    for(int i=0;n>0;i++){
        ld=n%10;
        sum =sum+ld*mult;
        mult=mult*2;
        n=n/10;
    }
    cout<< sum;
    return 0;
}
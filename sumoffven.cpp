#include<iostream>
using namespace std;
int main(){
int N;
cin>>N;
int oddsum=0;
int evensum=0;
for ( int pos = 1; pos <= N; pos++){
    int ld=N%10;
    if (pos%2==0){
        cout<<evensum<<endl;
    }
    else{
        cout<<oddsum<<endl;
        oddsum=oddsum+ld;
    }
    return 0;
}







    return 0;
}
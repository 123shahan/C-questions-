#include<iostream>
using namespace std;
int main(){
    int a=16, b=24, i;
    for ( i = min(a,b); i >=1; i--){

        if (a%i==0 && b%i==0){         
        
        break;
        }
    }
    	cout << i;
	return 0;
}

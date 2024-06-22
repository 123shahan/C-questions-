#include <iostream>
using namespace std;

int main(){
	int no;
	cin>>no;

	int sum = 0;
	while(true){
		sum = sum + no;
		if(sum<0){
			break;
		}
		cout<<no<<endl;
		cin>>no;
		
	}
}


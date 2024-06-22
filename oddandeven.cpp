#include<iostream>
using namespace std;
int SumofDigits(int car){
	int sum = 0;
	while(car>0){
		int digit = car%10;
		sum = sum + digit;
		car = car/10;
	}	
	return sum;
}
int main() {
	int n = 2;
	 int car;
	for(int i=1;i<=n;i++){
		cin>>car;
		int sum = SumofDigits(car);
		if(sum%4==0){
			cout<<"Yes"<<endl;
		}
		else if(sum%3==0 and sum%2!=0){
			cout<<"Yes"<<endl;			
		}
		else{
			cout<<"No"<<endl;
		}
	}

}
 
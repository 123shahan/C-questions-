#include<iostream>
using namespace std;
int main(){
int n;
	cin>>n;

	// 1 2 3 4 5 6 7 8 9 10 11

	// 1 to 12
	// 1^2^3^4^5^6^7^8^9^10^11^12

	int ans=0;
	int i=1;
	while(i<=n){
		ans=ans^i;
	i++;

	}

	// 1 2 3 4 5 6 7 8 9 10 11 
	int no;
	int c=1;
	while(c<=n-1){
		cin>>no;
	ans=ans^no;
	c=c+1;
	}

	cout<<ans<<endl;
    return 0;
}
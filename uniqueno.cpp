#include<iostream>
using namespace  std;
int main(){
	int tn;
	cin>>tn;

	int no;
	cin>>no;
	int ans=no;

	for(int i=1;i<=tn-1;i=i+1){
		cin>>no;
	ans=ans^no;

	}

	cout<<ans<<endl;
	



	return 0;
}
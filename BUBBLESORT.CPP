#include<iostream>
using namespace std;
int main(){

	 int arr[1000];
	 int n;
	 cin>>n;
	 for (int i = 0; i <=n-1; ++i)
	 {
	 	cin>>arr[i];
	 }
	 	for(int step=1;step<=n-1;step++){
		for(int i=0;i<=n-1-step;i++){
			if(arr[i]>arr[i+1]){
				arr[i]=(arr[i]+arr[i+1])-(arr[i+1]=arr[i]);
			}
		}
	}
	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
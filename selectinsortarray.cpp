#include<iostream>
using namespace std;
int main(){
 int arr[1000];
	int n;
	cin>>n;
	 for (int i = 0; i <=n-1; i++)
	 {
	 	cin>>arr[i];

	 }
// algorithm of selection sort kaise kaise higa 
	 for(int position=0;position<=n-2;position++){
	 	int minindex=position;
        int j;
	 	for(int j=position+1;j<=n-1;j++){
	 		if(arr[minindex]>arr[j]){
	 			minindex=j;
	 		}
	 	}
	 	swap(arr[minindex],arr[position]);
	 }

	for (int i = 0; i <=n-1; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
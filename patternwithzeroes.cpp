#include<iostream>
using namespace std;
int main()
{
	int tr,row,count,x;
	cin>>tr;
	row=1;
	while(row<=tr){
		x=row;
		count=1;
		while(count<=row){
			if(count==1 || count == row){
				cout<<row;
			}
			else{
				cout<<'0';
			}
			count=count+1;
		}
		cout<<endl;
		row=row+1;
	}
    return 0;
}
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
//array input
for (int  i = 0; i<n; i++)
{
  cin>>arr[i];
}
//sum of the elemennts

for (int i = 1; i<n; i++)
{
    arr[i]=arr[i]+arr[i-1];
}
//print

for (int i = 0; i<n; i++)
{
    cout<<arr[i]<<" ";
}










    return 0;
}
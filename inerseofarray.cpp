#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
//declare array
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
// declare second array with brr
int brr[n];
for (int i = 0; i < n; i++)
{
    brr[arr[i]]=i;
}
    //print the array
    for (int  i = 0; i < n; i++)
    {
        cout<<brr[i]<<" ";
    }
    return 0;
}

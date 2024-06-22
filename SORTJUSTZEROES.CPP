#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[100];

for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i <n; i++)
{
    int minindex=i;

for (int j=i+1; j <n; j++)
{
    if (arr[minindex]>arr[j])
    {
        minindex=j;
    }
}
swap(arr[minindex],arr[i]);
}


//print
for (int i = 0; i <n; i++)
{

    cout<<arr[i]<<" ";
}







    return 0;
}
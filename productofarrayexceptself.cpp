#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
cout<<"";
for (int i = 0; i<n; i++)
{
    cin>>arr[i];
}
// culculate total product

int total_product=1;
for (int i = 0; i<n; i++)
{
    total_product=total_product*arr[i];
}

//output of the array

int output[n];
for (int  i = 0; i<n; i++)
{
    output[i]= total_product/arr[i];
}

    //result ko print kara dete hain

    cout<<"";
    for (int i = 0; i<n; i++)
    {
        cout<<output[i]<<" ";
    }



    return 0;
}
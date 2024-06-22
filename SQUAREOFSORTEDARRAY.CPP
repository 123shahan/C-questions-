#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //declare the array
    int arr[100];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    //square of each element
    for (int i = 0; i<n; i++)
   {
    arr[i]=arr[i] * arr[i];
    
    }
    //usig selection sort sort the element
    for (int i = 0; i<n; i++)
    {
        int minindex=i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[minindex]>arr[j])
            {
                minindex=j;
            }
            
        }
        swap(arr[minindex],arr[i]);
        }

    //print
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
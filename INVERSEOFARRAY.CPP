#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
  
  int brr[n];
  
  for(int i=0; i<n; i++)
  {
      brr[arr[i]] = i;
  }
  
  for(int i=0; i<n; i++)
  {
      cout<< brr[i]<< " ";
  }

return 0;
}
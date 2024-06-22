#include <iostream>
using namespace std;
int trap(int arr[], int n) {
  int waterTrapped = 0;
  for (int i = 0; i < n; i++) {
    int j = i;
    int leftMax = 0, rightMax = 0;
    while (j >= 0) {
      leftMax = max(leftMax, arr[j]);
      j--;
    }
    j = i;
    while (j < n) {
      rightMax = max(rightMax, arr[j]);
      j++;
    }
    waterTrapped += min(leftMax, rightMax) - arr[i];
  }
  return waterTrapped;
}
int main() {
    
    int ac, n;
    cin>>ac;
    for(int i=0; i<=ac-1; i++)
    {
        cin>> n;
        int arr[n]; 
        for(int j=0; j<=n-1; j++)
        {
            cin>> arr[j];
        }
        cout<<trap(arr, n)<< endl;
    }
    
}
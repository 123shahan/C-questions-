#include <iostream>
#include <algorithm> // Include the <algorithm> header for the math functions
using namespace std;

int rainwater(int arr[], int n) {
    int left[n], right[n];
    left[0] = arr[0];
    
    // Calculate the maximum height of bars to the left of each bar
    for (int i = 1; i < n; i++) {
        left[i] = max(left[i - 1], arr[i]);
    }

    right[n - 1] = arr[n - 1];
    
    // Calculate the maximum height of bars to the right of each bar
    for (int i = n - 2; i >= 0; i--) {
        right[i] = max(right[i + 1], arr[i]);
    }

    int ans = 0;
    // Calculate the trapped water above each bar
    for (int i = 0; i < n; i++) {
        ans += min(left[i], right[i]) - arr[i];
    }
    
    return ans;
}

int main() {
    int n;
    cout << "";
    cin >> n;

    int arr[n];
    cout << "";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int trappedWater = rainwater(arr, n);
    cout << endl;

    return 0;
}

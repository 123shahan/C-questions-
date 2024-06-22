#include<iostream>
using namespace std;
int main() {
    int M; 
    int N;
    cin >> M;
    cin>>N; // Input the maximum number of smartphones Aayush and Harshit can purchase
    int aayush = 1, harshit = 2; // Initialize the number of smartphones Aayush and Harshit can purchase initially
    
    // Loop until either Aayush or Harshit can't purchase more smartphones
    while (true) {
        // Aayush purchases smartphones
        M -= aayush;
        if (M < 0) { // If Aayush can't purchase more smartphones, Harshit wins
            cout << "Harshit" << endl;
            break;
        }
        
        // Harshit purchases smartphones
        N -= harshit;
        if (N < 0) { // If Harshit can't purchase more smartphones, Aayush wins
            cout << "Aayush" << endl;
            break;
        }
        
        // Increment the number of smartphones Aayush and Harshit can purchase for the next turn
        aayush += 2;
        harshit += 2;
    }
    return 0;
}

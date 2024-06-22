#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int oddsum = 0;
    int evensum = 0;

    int pos = 1;
    while (N > 0) {
        int ld = N % 10;

        if (pos % 2 == 0) {
            evensum = evensum + ld;
        } 
        else {
            oddsum = oddsum + ld;
        }

        N=N/10;  
        pos++;    
    }

    cout << "Sum of odd placed digits: " << oddsum << endl;
    cout << "Sum of even placed digits: " << evensum << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    long N1, N2, largest;
    cin >> N1;
    cin >> N2;
    largest = N2;

    for (long i = 1; i < N1; ++i) {
        cin >> N2;
        if (largest < N2)
            largest = N2;
    }

    cout << largest;

    return 0;
}

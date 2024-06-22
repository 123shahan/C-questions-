#include<iostream>
using namespace std;

int main() {
    int N1, N2, temp, rem, c, p, sum, i;

    cout << "Enter the first number: ";
    cin >> N1;
    cout << "Enter the last number: ";
    cin >> N2;

    while (N1 < N2) {
        c = 0;
        sum = 0;
        temp = N1;

        // Calculate the number of digits in temp
        while (temp != 0) {
            c = c + 1;
            temp = temp / 10;
        }

        temp = N1;
        while (temp != 0) {
            rem = temp % 10;
            p = 1;

            // Calculate power of rem using for loop
            for (i = 1; i <= c; i++) {
                p = p * rem;
            }

            sum = sum + p;
            temp = temp / 10;
        }

        if (sum == N1) {
            cout << N1 << " is ARMSTRONG" << endl;
        }

        // Increment N1 inside the loop
        N1++;
    }

    return 0;
}


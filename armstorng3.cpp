#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrong(int num) {
    int numDigits = 0;
    int temp = num;
    while (temp != 0) {
        temp = temp/10;
        numDigits++;
    }
    temp = num;
    int sum = 0;
    while (temp != 0) {
        int rem = temp % 10;
        sum = sum + pow(rem, numDigits);
        temp = temp/10;
    }
    return (num == sum);
}
int main() {
    int n;
    cout << " "<<endl;
    cin >> n;
    if (isArmstrong(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
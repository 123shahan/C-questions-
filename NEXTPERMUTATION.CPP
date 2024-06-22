#include<iostream>
using namespace std;
int main(){
    int T; 
    cin >> T; 
    while (T--) { 
        int M, N; 
        cin >> M >> N; 
        int a = 1, h = 2; 
        while (true) { 
            M = M - a;
            if (M < 0) { 
                cout << "Harshit" << endl; 
                break; 
            }
            N = N - h; 
            if (N < 0) { 
                cout << "Ayush" << endl; 
                break; 
            }
            a = a + 2; 
            h = h + 2; 
        }
    }
    return 0; 
}

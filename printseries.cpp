#include <iostream>
using namespace std;

int main(){
    
    // // // Question 13 Print Series
    
    int N1;
    cin >> N1;
    int N2;
    cin>> N2;
    int count =0;
    for(int i=1; count<10; i++)
    {
        int sum=0;
        sum=3*i+2;
        if(sum%N2 !=0)
        {
            cout << sum<< endl;
            count++;
        }
        
    }
}
    

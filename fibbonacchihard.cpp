#include<iostream>
using namespace std;
int main(){
    long a=0, b=1,c;
    long store=1, N;
    cin>>N;
    if (N>1)
    {
        while (store<N)
        {
        c=a+b;
        a=b;
        b=c;
        store++;
        }
        cout<< b;
    }
    else if (N==1)
    {
        cout<<"1";
    }
    return 0;
}
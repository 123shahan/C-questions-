#include<iostream>
using namespace std;
int main(){
    int N1=4;
    int N2=6;
    int i;
    for ( i = 1; i <=N1*N2; i++)
    {
    if (i%N1==0 && i%N2==0)
    {
        break;
    }
    
    }
    cout<<i<<endl;
    return 0;
}
    
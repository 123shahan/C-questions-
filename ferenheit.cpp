#include<iostream>
using namespace std;
int main(){
    int initial,final,step;
    cin>>initial>>final>>step;
    int fer = initial;
    while (fer<=final){
    int cel =(5.0/9)*(fer-32);
    cout<<fer<<'\t'<<cel<<endl;
    fer = fer + step;
    }
    return 0;
    }
    
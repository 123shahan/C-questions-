#include<iostream>
using namespace std;
int main(){
    int init,final,step;
    cin>>init>>final>>step;
    int fer=init;
    while (fer<=final){
        int cel=5.0/9*(fer-32);
        cout<<fer<<'\t'<<cel<<endl;
        fer=fer+20;
    }
    return 0;
}
    
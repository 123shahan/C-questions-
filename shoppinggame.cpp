#include<iostream>
using namespace std;
int main(){
int no;
cin>>no;
for (int  i = 0; i < no; i++)
{
    int m=0, n=0;
    cin>>m;
    cin>>n;
    int Aremain = m;
    int Hremain = n;
    int a =1;
    int h=2;
    while (true)
    {
        Aremain = Aremain - a;
        if (Aremain < 0)
        {
        cout<<"Harshit"<<endl;
        break;
        }
        a = a + 2;


        Hremain = Hremain - h;
        if (Hremain < 0){
        cout<<"Ayush"<<endl;
        break;
        }
        h = h + 2;
        
        
        
    }
    
}









    return 0;
}
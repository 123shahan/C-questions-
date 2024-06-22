#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
  cin>>arr[i];
}
for (int  i = 0; i < n; i++)
{
    int carno = 0;
    carno = arr[i];
    int oddsum = 0;
    int evensum = 0;
    while (carno > 0)
    {
        int a = carno % 10;
        if (a % 2 !=0)
        {
            oddsum = oddsum + a;
        }
        else
        {
            evensum = evensum + a;
        }
        carno = carno / 10;
        
    }
    if (oddsum % 3 ==0 || evensum % 4 ==0)
    {
        cout<<"Yes"<< endl;
    }
    else
    {
        cout<<"No"<< endl;
    }
    
    

}
    return 0;
}
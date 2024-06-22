#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int n;
cin>>n;
long long arr[n];
//test  
for (int i = 0; i<n; i++)
{
    cin>>arr[i];
}
//test cases check karna hai abb

for (int  i = 0; i<n; i++)
{
    int ld=0;
    int sum=0;
    int m=arr[i];

    //iterate karo abb 
    for (int j = 0; m>0 ; j++)
    {
        ld=m%10;
        sum= sum+ld* pow(2,j);
        m=m/10;
    }
    cout<<sum<<endl;

    
}












    return 0;
}
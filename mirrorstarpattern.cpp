#include <iostream>
using namespace std;
int main(){
    int tr;
    cin>>tr;
for(int i=1;i<=2*tr-1; i++){
    cout<<'*';
}
cout<<endl;
for(int rowno=1;rowno<=tr-2;rowno++){
    int st=1;
    while(st<=tr-rowno){
cout<<'*';
st++;
    }
  for( int sp=1; sp<=2*rowno;sp++){
      cout<<' ';

  }
    int st1=1;
    while(st1<=tr-rowno){
cout<<'*';
st1++;
    }
cout<<endl;
}
for(int rowno=1;rowno<=tr-1;rowno++){
    for(int st2=1;st2<=rowno;st2++){
        cout<<'*';
    }
    for(int sp2=1;sp2<=2*tr-2*rowno;sp2++){
        cout<<' ';
    }

   
    for(int st3=1;st3<=rowno;st3++){
        cout<<'*';

    }
    cout<<endl;
}
for(int j=1;j<=2*tr-1;j++){
    cout<<'*';
}

return 0;
}
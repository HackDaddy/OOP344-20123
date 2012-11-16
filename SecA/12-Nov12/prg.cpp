#include <iostream>
using namespace std;
#include "stacktemp.h"

class Account{
  double _bal;
public:
  Account(double bal = 100){
    _bal = bal;
  }
  ostream& print(ostream& os)const{
    return os<<_bal;
  }
  Account operator+(const Account& A)const{
    return Account(_bal+A._bal);
  }
};

ostream& operator<<(ostream& os,const Account& A){
  return A.print(os);
}
int main(){
  Stack<int> ST;
  Stack<Account> AT;
  int i;
  for(i=10;i<50;i+=10){
    ST.push(i);
  }

  for(i=1000;i<5000;i+=1000){
//    AT.push(Account(double(i)));
    AT.push(i);
  }
  while(!ST.isEmpty()){
    cout<<ST.pop()<<endl;
  }
  while(!AT.isEmpty()){
    cout<<AT.pop()<<endl;
  }
  return 0;
}
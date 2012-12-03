#include <iostream>
#include <cstring>
#include <cstdarg>
using namespace std;

#define make(x, y) y x

double DblAvr(int num, ...){
//  make(sum, double) = 0.0;
  double sum = 0.0;
  va_list varg;   // handle to the variable arg list
  va_start(varg, num);   // initiate (set) the varg to the first variable arg list
  for(int i=0;i<num;i++){
    sum += va_arg(varg, double);  // gets and casts the next var.....
  }
  va_end(varg);  // terminates and deallocates the list
  return sum / num;
}

int main(){
  cout<<DblAvr(3,30,40)<<endl;
  cout<<DblAvr(3,30,40,50)<<endl;
  cout<<DblAvr(3,30,40,50,60,70,80)<<endl;
  return 0;
}

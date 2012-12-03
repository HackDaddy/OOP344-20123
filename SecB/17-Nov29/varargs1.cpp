#include <iostream>
#include <cstdarg>
using namespace std;

#define make(x, y) y x
int intSum(int num, ...){
int intAvr(int num, ...);
int main(){
  make(a, int);
  a = intAvr(5,1,2,3,4,5);
  cout<<a<<endl;
  cout<<intAvr(3,100,200,3400)<<endl;
  cout<<intAvr(10, 1,2,3,4,5,6,7,8,9,10)<<endl
  return 0;
}
/// This is Variable argument list (NOT COMMAND LINE ARGUMENTS)
int intAvr(int num, ...){
  int avr = 0;
  va_list varg;
  va_start(varg, num);
  for(int i =0;i<num;i++){
    avr += va_arg(varg, int);
  }
  avr = avr / num;
  va_end(varg);
  return avr;
}
int intSum(int num, ...){
  int sum = 0;
  va_list varg;
  va_start(varg, num);
  for(int i =0;i<num;i++){
    sum += va_arg(varg, int);
  }
  va_end(varg);
  return sum;
}

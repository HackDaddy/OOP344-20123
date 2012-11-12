#include <iostream>
using namespace std;

char* bits(int val);

int main(){
  int a = 0x7a;
  cout<<bits(a)<<endl;
  // it prints 01111010
  return 0;
}
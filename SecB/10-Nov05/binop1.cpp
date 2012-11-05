#include <cstdio>
using namespace std;

int main(){
  int a = 0x7a;
  int b = 0xa9;
  int c = a && b;
  printf("a && b: %X\n", c);
  c = a & b;
  printf("a &b: %X\n", c);
  c = a | b;
  printf("a | b: %X\n", c);
  c = a ^ b;
  printf("a ^ b: %X\n", c);
  c = ~a;
  printf("~a: %X\n", c);

  return 0;
}
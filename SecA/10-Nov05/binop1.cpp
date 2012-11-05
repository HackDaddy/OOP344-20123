#include <cstdio>
using namespace std;
int main(){
  int a = 0x7a;
  int b = 0xA3;
  int c;
  printf("a: %d  %X\n", a, a);
  printf("b: %d  %X\n", b, b);
  c = a && b;
  printf("c: %d  %X\n", c, c);
  c = a & b;
  printf("c: %d  %X\n", c, c);
  c = a | b;
  printf("c: %d  %X\n", c, c);
  c = a ^ b;
  printf("c: %d  %X\n", c, c);
  c = ~a;
  printf("c: %d  %X\n", c, c);
  return 0;
}

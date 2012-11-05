#include <cstdio>
using namespace std;

int main(){
  int a = 0x7a;
  int b = ~a + 1;
  int c;
  printf("a: %X  %d\n", a, a);
  printf("b: %X  %d\n", b, b);
  c = a << 1;
  printf("a << 1: %X  %d\n", c, c);
  c = a >> 1;
  printf("a >> 1: %X  %d\n", c, c);
  c = b << 1;
  printf("b << 1: %X  %d\n", c, c);
  c = b >> 1;
  printf("b >> 1: %X  %d\n", c, c);

  return 0;
}
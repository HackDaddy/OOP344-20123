#include <cstdio>
using namespace std;
int main(){
  int a = 0x7a;
  int b = ~a + 1;
  int c;
  c = a << 1;
  printf("c: %d  %X\n", c, c);
  c = a << 2;
  printf("c: %d  %X\n", c, c);
  c = a >> 1;
  printf("c: %d  %X\n", c, c);
  printf("b: %d  %X\n", b, b);
  c = b >> 1;
  printf("c = b >> 1 %d  %X\n", c,c);
  return 0;
}

#include <cstdio>
using namespace std;

int main(){
  int a = 0x7a;
  int b = ~a + 1;
  unsigned int ua = 0x7a;
  unsigned int ub = ~a + 1;
  printf("a: %d\n", a);
  printf("b: %d\n", b);
  printf("a: %u\n", ua);
  printf("b: %u\n", ub);

  return 0;
}
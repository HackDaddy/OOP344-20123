#include <cstdio>
using namespace std;
int main(){
  int a = 0x7a;
  int b = ~a + 1;
  printf("a: %d\n", a);
  printf("b: %d\n", b);
  return 0;
}

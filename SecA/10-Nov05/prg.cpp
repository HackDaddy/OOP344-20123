#include <cstdio>
using namespace std;

int main(){
  int v = 234;
  int k = 0xfa45c;
  int e = v ^ k;
  int t;
  printf("e = v ^ k: %d\n", e);
  t = e ^ k;
  printf("t = e ^ k: %d\n", t);
  return 0;
}
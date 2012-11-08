#include <cstdio>
using namespace std;

bool isOn(unsigned int Val, unsigned int BitNo){
  return !!(Val & (1 << (BitNo -1)));
}



void prnBits(unsigned int Val){
  unsigned int m = 1 << sizeof(Val) * 8 -1;
  while(m){
    printf("%d", !!(Val & m));
    m = m >> 1;
  }
}

void bitDump(void* memAddress, unsigned int memSize);

char *bits(unsigned int Val); 
// write the above function so it works like this:
// cout<<bits(2345)<<endl;


int main(){
  unsigned int a = 0xffffffff;
  prnBits(0xf0f0f0f0);
  putchar('\n');
  printf("%u\n", a);
  a++;
  printf("%u\n", a);
  return 0;
}
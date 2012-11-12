#include <cstdio>
using namespace std;

bool isOn(unsigned int val, unsigned int bitNo){
  return  !!(val & (1 << (bitNo-1))); // to convert non zero to one and zero to zero
  //unsigned int m = 1 << (bitNo-1);
  //if(m & val)
  //  return true;
  //else
  //  return false;
}

// sets the bitNo bit of val to the value of bitval
void setBit(unsigned int& val, unsigned int bitNo, bool bitval);

// prints the bit value of the given memory with given size

void bitDump(void* memadd, unsigned int size);

void prnBits(int val){
  unsigned int m = 1 << (sizeof(val)*8 -1);
  while(m){
    printf("%d", !!(m & val));
    m = m >> 1;
  }
  printf("\n");
}

int main(){
  prnBits(0x7a);
  prnBits(0xf0f0f0f0);
  // it prints 01111010
  return 0;
}
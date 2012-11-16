#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int i = 1000;
  fstream file("datafile2.bin", ios::out|ios::binary);
  for(;i < 1000000;i++){
    file.write((char*)&i, sizeof(int));
  }
  return 0;
}
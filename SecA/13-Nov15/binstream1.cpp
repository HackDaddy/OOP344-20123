#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int i = 123456;
  fstream file("datafile.bin", ios::out|ios::binary);
  file.write((char*)&i, sizeof(int));
  return 0;
}
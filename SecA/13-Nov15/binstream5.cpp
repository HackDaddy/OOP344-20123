#include <iostream>
#include <fstream>
using namespace std;

int main(){
  int i = 1000;
  fstream file("datafile2.bin", ios::in|ios::binary);
  for(;!file.fail();i++){
    file.read((char*)&i, sizeof(int));
    cout<<i<<", ";
  }
  return 0;
}
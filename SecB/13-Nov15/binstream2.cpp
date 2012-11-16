#include <iostream>
#include <fstream>
using namespace std;
int main(){
  int i = 0;
  fstream file("datafile.bin", ios::in|ios::binary);
  file.read((char*)&i, sizeof(i));
  cout<<i<<endl;
  return 0;
}
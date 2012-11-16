#include <iostream>
#include <fstream>
using namespace std;
int main(){
  int i = 1000;
  fstream file("datafile2.bin",ios::out|ios::binary);
  for(;i<100000;i++){
    file.write((char*)&i, sizeof(i));
  }
  file.close();
  file.open("datafile2.bin",ios::in|ios::binary);
  while(file.good()){
    file.read((char*)&i, sizeof(i));
    cout<<i<<", ";
  }
  return 0;
}
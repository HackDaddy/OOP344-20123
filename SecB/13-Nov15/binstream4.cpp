#include <iostream>
#include <fstream>
using namespace std;

int main(){
  fstream file("datafile2.bin",ios::in|ios::binary);
  int i;
  file.seekg(4999*sizeof(int));
  file.read((char*)&i, sizeof(int));
  cout<<i<<endl;
  cout<<file.tellg()<<endl; // 5000 * sizeof(int)
  file.close();// no need
  return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main(){
  ofstream fout("greetings.txt");
  fout<<"Hello!, how are you there?"<<endl;
  return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream fout("Greeting.txt");
  fout<<"Hello!, my name is Fardad!"<<endl;
  return 0;
}
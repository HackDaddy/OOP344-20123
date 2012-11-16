#include <iostream>
#include <fstream>
using namespace std;

int main(){
  char str[100];
  ifstream fin("greetings.txt");
  fin>>str;
  cout<<str<<endl;
  fin>>str;
  cout<<str<<endl;
  fin.getline(str, 99, '\n');
  cout<<str<<endl;
  return 0;
}
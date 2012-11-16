#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream fin("Greeting.txt");
  char str[100];
  fin>>str;
  cout<<str<<endl;
  fin>>str;
  cout<<str<<endl;
  fin.getline(str, 99, '\n');
  cout<<str<<endl;
  return 0;
}
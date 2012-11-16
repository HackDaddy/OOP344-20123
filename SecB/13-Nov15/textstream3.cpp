#include <iostream>
#include <fstream>
using namespace std;

int main(){
  fstream file("datafile2.txt",ios::in|ios::out);
  file<<"This is a test"<<endl;
  if(file.bad()){
    cout<<"File does not exist, attempting to create"<<endl;
    file.clear();
    file.open("datafile2.txt",ios::out);
    file<<"This is a test"<<endl;
    if(file.bad()){
      cout<<"working with file failed!"<<endl;
      return -1;
    }
    file.close();
    file.open("datafile2.txt",ios::in|ios::app);
  }
  file<<"with two lines"<<endl;
  return 0;
}
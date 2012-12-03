#include <iostream>
#include <fstream>
using namespace std;


bool find(fstream& file,unsigned int& loc, int value){
  int i;
  bool found = false;
  while(!file.fail()){
    file.read((char*)&i, sizeof(i));
    if(i == value){
      loc = (unsigned int)file.tellg() - sizeof(int);
      found = true;
    }
  }
  return found;
}
int main(){
  int i = 1000;
  unsigned int loc = 0;
  fstream file("datafile2.bin",ios::out|ios::binary);
  for(;i<100000;i++){
    file.write((char*)&i, sizeof(i));
  }
  file.close();
  file.open("datafile2.bin",ios::in|ios::binary);
  if(find(file, loc, 12345)){
    cout<<"The value is found at: "<<loc<<endl;
  }
  else{
    cout<<"not found"<<endl;
  }
  return 0;
}


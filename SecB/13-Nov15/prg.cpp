#include <iostream>
#include <fstream>
using namespace std;

int main(){
  fstream file("datafile2.bin",ios::in|ios::binary);
  int i;
  file.seekg((ios::off_type)0, ios::end);
  cout<<"File size: "<<file.tellg()<<endl;
  file.seekg((ios::pos_type)4999*sizeof(int));
  file.read((char*)&i, sizeof(int));
  cout<<i<<endl;
  file.seekg((ios::off_type)-2*sizeof(int), ios::cur);
  file.read((char*)&i, sizeof(int));
  cout<<i<<endl;
  file.seekg((ios::pos_type)10000000*sizeof(int));
  cout<<"where I am now:"<<file.tellg()<<endl;
  if(file.fail()) cout<<"seek failed (it never does!!!!)"<<endl;
  i = 0;
  file.read((char*)&i, sizeof(int));
  if(file.fail()) cout<<"read failed"<<endl;
  cout<<i<<endl;
  file.close();// no need
  return 0;
}
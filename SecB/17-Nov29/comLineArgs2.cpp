#include <iostream>
#include <fstream>
using namespace std;
// This is command line arguments (NOT VARIABLE ARGUMENT LIST)
int main(int argc, char* argv[]){
  if(argc != 3){
    cout<<"copy source des <ENTER>"<<endl;
  }
  else{
    ifstream inf(argv[1], ios::binary);
    ofstream outf(argv[2], ios::binary);
    char ch;
    while(!inf.fail()){
      inf.read(&ch, 1);
      if(!inf.fail()){
        outf.write(&ch, 1);
      }
    }
  }
  return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[], char* env[]){
  int i=0;
  while(env[i]){
    cout<<(i+1)<<":  "<<env[i]<<endl;
    i++;
  }
  return 0;
}
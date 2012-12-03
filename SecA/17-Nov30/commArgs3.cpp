#include <iostream>
#include <cstdio>
using namespace std;


int main(int argc, char* argv[], char* env[]){
  for(int i=0;env[i];i++){
    cout
      <<i+1<<":  "
      <<env[i]<<endl;
  }
 
  return 0;
}

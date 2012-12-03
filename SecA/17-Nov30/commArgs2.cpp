#include <iostream>
#include <cstdio>
using namespace std;


int main(int argc, char* argv[]){
  int sum = 0;
  int num;
  for(int i=1;i<argc;i++){
    if(sscanf(argv[i], "%d", &num) == 1){
      sum += num;
    }
  }
  cout<<sum<<endl;
  return 0;
}

#include <iostream>
using namespace std;
#include "intarr.h"

int main(){
  IntArr A(10);
//  A.Dynamic = false;
  int i;
  for(i=0;i<12;i++){
    A[i] = i*100;
  }
  for(i=0;i<A.size();i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
  //for(i=0;i<10;i++){
  //  cout<<A.operator[](i)<<" "; ///uuuuuuuuuuuugh
  //}
  cout<<endl;
  return 0;
}

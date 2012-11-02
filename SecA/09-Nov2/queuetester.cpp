
#include <iostream>
using namespace std;
#include "queue.h"

int main(){
  Queue Q;
  int i;
  for(i=10;i<=50;i+=10){
    Q.add(i);
  }
  //for(i=0;i<Q.size();i++){
  //  cout<<Q[i]<<endl;
  //  Q[i] = Q[i] *100;
  //}
  //for(i=0;i<Q.size();i++){
  //  cout<<Q[i]<<endl;
  //}
  while(!Q.isEmpty()){
    cout<<Q.remove()<<endl;
  }
  return 0;
}
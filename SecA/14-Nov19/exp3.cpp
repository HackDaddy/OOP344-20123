#include <iostream>
using namespace std;
void hoohoo(int i){
  static double d = 2.2;
  if(i%2 == 0){
    if(i%3 == 0){
      throw "what ever";
    }
    if(i%4 == 0){
      cout<<"everything ok"<<endl;
      return;
    }
    throw i;
  }
  else{
    d += 2;
    throw d;
  }
}
void heehee(void){
  int 
    i=10;
  while(i--){
    try{
      hoohoo(i);
      cout<<"No exception"<<endl;
    }
    catch(int a){
      cout<<"integer "<<a<<" is here"<<endl;
    }
    catch(double b){
      cout<<"double "<<b<<" is here "<<endl;
    }
    cout<<"something here"<<endl;
  }
}

int main(void){
  try{
    heehee();
  }
  catch(char *s){
    cout<<s<<endl;
  }

  return 0;
}
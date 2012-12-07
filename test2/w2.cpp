#include <iostream>
#include <cstdarg>
#include <fstream>
using namespace std;
// if this code is saved in a file called w2.cpp and the executable is exectued as:
// $ w2 Fee Faa Foo
void w5(void){
  unsigned int tst = 23564;
  unsigned int x = ~tst + 1;
  cout<<"W5: "<<x+tst<<endl;
}

void w4(const char* fn){
  char ch;
  ifstream w(fn,ios::binary);
  w.seekg(10);
  w.read(&ch,1);
  cout<<"W4: "<<ch;
  w.seekg((ios::off_type)-1, ios::cur);
  w.read(&ch,1);
  cout<<ch;
  w.seekg((ios::off_type)1, ios::beg);
  w.read(&ch,1);
  cout<<ch;
  w.seekg((ios::off_type)-1, ios::end);
  w.read(&ch,1);
  cout<<ch<<endl;
}

class A{
private:
  int _data;
public: 
  A(int data = -1):_data(data){  
  }
  void print(){
    cout<<" A: "<<_data;
  }
};
class B:public A{
public: 
  B(int data):A(data*10){}
  void print(){
    A::print();
  }
};
class C:virtual public A{
public: 
  C(int data = 10):A(data/2){}
  void print(){
    A::print();
  }
};
class D:public B, public C{
public: 
  D(int data):B(data/2){}
  void print(){
    B::print();
    C::print();
  }
};

void w3(int d){
  cout<<"W3:";
  D(d).print();
  cout<<endl;
}

void w2(int n, ...){
  int s = 0;
  va_list varg;
  va_start(varg, n);
  for(int i =0;i<n;i++){
    s += (i%2 == 0) ? va_arg(varg, int): -va_arg(varg, int);
  }
  va_end(varg);
  cout<<"W2: "<<s<<endl;
}

int main(int argc, char* argv[]){
  cout<<argc<<": "<<argv[2]<<endl;
  w2(3,10,20,30);
  w3(50);
  w4("w2.cpp");
  w5();
  return 0;
}
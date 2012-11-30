#include <iostream>
using namespace std;
class A{
private:
  int _data;
public: 
  A(int data = -1):_data(data){  // defaults the A with -1
  }
  virtual int print(){
    cout<<"A: "<<_data<<endl;
    return _data;
  }
};
class B: public A{
private:
  int data;
public: 
  B(int data){
    this->data = data;
  }
  int print(){
    cout<<"parent's "; 
    A::print();
    cout<<"B: "<<data<<endl;
    return data;
  }
};

int main(){
  A* aptr;
  B b(30);
  aptr = &b;
  A& aref = b;
  b.print();
  b.A::print();
  cout<<"****** Through casting"<<endl;
  ((A)b).print();
  A(b).print();
  cout<<"****** Through base pointer and reference"<<endl;
  aptr->print();
  aref.print();
  return 0;
}
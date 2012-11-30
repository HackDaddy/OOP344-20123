#include <iostream>
using namespace std;

class B{
private:
  int data;
public: 
  B(int data){
    this->data = data;
  }
  int print(){
    cout<<"B: "<<data<<endl;
    return data;
  }
};
class C{
private:
  int data;
public: 
  C(int data = 10){
    this->data = data;
  }
  int print(){
    cout<<"C: "<<data<<endl;
    return data;
  }
};
class D:public B, public C{
private:
  int data;
public: 
  D(int data):B(data/2),C(data*2){
    this->data = data;
  }
  int print(){
    cout<<"Base 1: ";
    B::print();
    cout<<"Base 2: ";
    C::print();
    cout<<"D: "<<data<<endl;
    return data;
  }
};

int main(){
  D d(50);
  d.print();
  cout<<"*****"<<endl;
  d.B::print();
  d.C::print();
  return 0;
}
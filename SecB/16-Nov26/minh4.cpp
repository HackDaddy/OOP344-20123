#include <iostream>
using namespace std;
class A{
private:
  int data;
public: 
  A(int data = -1){  // defaults the A with -1
    this->data = data;
  }
  int print(){
    cout<<"A: "<<data<<endl;
    return data;
  }
};
class B:virtual public A{
private:
  int data;
public: 
  B(int data){
    this->data = data;
  }
  int print(){
    A::print();
    cout<<"B: "<<data<<endl;
    return data;
  }
};
class C:virtual public A{
private:
  int data;
public: 
  C(int data = 10):A(data/2){
    this->data = data;
  }
  int print(){
    A::print();
    cout<<"C: "<<data<<endl;
    return data;
  }
};
class D:public B, public C{
private:
  int data;
public: 
  D(int data):B(data/2){
    this->data = data;
  }
  int print(){
    B::print();
    C::print();
    cout<<"D: "<<data<<endl;
    return data;
  }
};

int main(){
  D d(50);
  d.print();
  cout<<"**************"<<endl;
  d.B::A::print();
  d.C::A::print();
  A(B(d)).print();
  A(C(d)).print();
  cout<<"**************"<<endl;
  d.A::print();
  A(d).print();

  return 0;
}
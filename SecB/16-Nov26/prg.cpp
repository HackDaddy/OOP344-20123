#include <iostream>
using namespace std;
class A{
private:
  int _data;
public: 
  A(int data = -1):_data(data){  // defaults the A with -1
  }
  int print(){
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
    A::print();
    cout<<"B: "<<data<<endl;
    return data;
  }
};

int main(){
  
  B b(30);
  b.print();
  
  return 0;
}
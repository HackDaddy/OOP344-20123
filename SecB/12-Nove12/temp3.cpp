#include <iostream>
using namespace std;


template <class T>
class Container{
  unsigned int _num;
  T _data;
public:
  Container(T data){
    _data =data;
    _num = 1;
  }
  unsigned int add(unsigned int val = 1){
    return _num += val;
  }
  void show();
  Container<T>& operator=(Container<T>& C){
    _data = C._data;
    return *this;
  }
};

template <class T>
void Container<T>::show(){
  for(unsigned int i=0;i<_num;i++){
    cout<<_data<<" ";
  }
  cout<<endl;
}

int main(){
  Container<int> A(100);
  A.add(3);
  Container<double> B(1.2345);
  B.add(5);
  A.show();
  B.show();
  return 0;
}
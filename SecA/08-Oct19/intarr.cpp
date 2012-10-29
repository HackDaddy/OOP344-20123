#include "intarr.h"

IntArr::IntArr(unsigned int size, bool dynamic){
  Dynamic = dynamic;
  _data = new int[size];
  this->_size = size;
}
IntArr::~IntArr(){
  delete[] _data;
}
int& IntArr::operator[](unsigned int index){
  if(index >= _size){
    resize(index * 2 < 4049 ? index *2 : index + 100);
  }
  return _data[index%_size];
}
unsigned int IntArr::size()const{
  return _size;
}
void IntArr::resize(unsigned int newSize){
  if(Dynamic){
    int* temp = new int[newSize];
    int i;
    for(i=0;i<newSize && i < _size; i++){
      temp[i] = _data[i];
    }
    delete[] _data;
    _data = temp;
    _size = newSize;
  }
}
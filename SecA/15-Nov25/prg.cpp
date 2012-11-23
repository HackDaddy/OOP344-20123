#include <iostream>
#include <cstring>
using namespace std;
class PhoneNo{
  char _name[41];
  int _number;
public:
  PhoneNo(const char* name="", int number = 0){
    strncpy(_name, name, 40);
    _name[40] = 0;
    _number = number;
  }  
  PhoneNo( int number){
    strcpy(_name, "");
    _number = number;
  }
  operator const char*(){
    return _name;
  }
  operator int(){
    return _number;
  }
  ostream& print(ostream& os)const{
    return os<<_name<<": "<<_number;
  }
};

ostream& operator<<(ostream&os, const PhoneNo& P){
  return P.print(os);
}
int main(){
  char str[] = "heehaw";
  PhoneNo F("Fardad Soleimanloo", 3151538);
  cout<<F<<endl;
  cout<<(const char*)F<<endl;
  cout<<(int)F<<endl;
  return 0;
}